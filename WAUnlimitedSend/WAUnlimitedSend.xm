#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Accounts/Accounts.h>
#import <Twitter/Twitter.h>
#import <Social/Social.h>
#import <AVFoundation/AVFoundation.h>
#import <Photos/Photos.h>
#import "FRPrefs.h"
#import "SCLAlertView.h"

%config(generator=internal)

@interface WASettingsViewController : UIViewController
@end

@interface WASettingsViewController (WAUnlimitedSend)
@end

%hook WASettingsViewController
- (void)viewDidLoad {
    %orig;
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"WAS" style:UIBarButtonItemStylePlain target:self action:@selector(DidEnterSetting:)];
}
%new
- (void)DidEnterSetting:(id)sender {
    NSURL *profileimage = [[NSURL alloc] initWithString:@"https://arab-dev.net/bd/BandarHL.png"];
    NSData *data1 = [NSData dataWithContentsOfURL:profileimage];
    
//    NSURL *Donateimage = [[NSURL alloc] initWithString:@"https://arab-dev.net/bd/PrefsDonate.png"];
//    NSData *data2 = [NSData dataWithContentsOfURL:Donateimage];
//    
//    NSURL *Heartimage = [[NSURL alloc] initWithString:@"https://arab-dev.net/bd/heart.png"];
//    NSData *data3 = [NSData dataWithContentsOfURL:Heartimage];
    
    
    
    
    FRPSection *HeaderSection = [FRPSection sectionWithTitle:@"Preferences" footer:nil];
    
    FRPSwitchCell *sendswitch = [FRPSwitchCell cellWithTitle:@"Enable" setting:[FRPSettings settingsWithKey:@"unlimitedVideo" defaultValue:@NO] postNotification:nil changeBlock:^(UISwitch *sender) {
        if ([sender isOn]) {
            SCLAlertView *SCalert = [[SCLAlertView alloc] initWithNewWindow];
            SCalert.backgroundType = SCLAlertViewBackgroundBlur;
            [SCalert addButton:@"Relaunch WhatsApp" actionBlock:^ {
                exit(0);
            }];
            [SCalert showNotice:@"WAUnlimitedSend" subTitle:@"You need Relaunch WhatsApp to apply changes" closeButtonTitle:@"Later" duration:0.0f];
        } else {
            SCLAlertView *SCalert = [[SCLAlertView alloc] initWithNewWindow];
            SCalert.backgroundType = SCLAlertViewBackgroundBlur;
            [SCalert addButton:@"Relaunch WhatsApp" actionBlock:^ {
                exit(0);
            }];
            [SCalert showNotice:@"WAUnlimitedSend" subTitle:@"You need Relaunch WhatsApp to apply changes" closeButtonTitle:@"Later" duration:0.0f];
        }
    }];
    
    
    
    FRPSection *DevSection = [FRPSection sectionWithTitle:@"Developer" footer:nil];
    
    FRPDeveloperCell *Developer = [FRPDeveloperCell cellWithTitle:@"BandarHelal" detail:@"BandarHL" image:[UIImage imageWithData:data1] url:@"https://twitter.com/BandarHL"];
    
    FRPDeveloperCell *paypal = [FRPDeveloperCell cellWithTitle:@"Donate via paypal" detail:@"PayPal" image:[UIImage imageNamed:@"/Library/Application Support/WAS/WAS.bundle/PrefsDonate.png"] url:@"https://www.paypal.me/fjr699"];
    
    [HeaderSection addCell:sendswitch];
    [DevSection addCell:Developer];
    [DevSection addCell:paypal];
    
    
    
    
    FRPreferences *table = [FRPreferences tableWithSections:@[HeaderSection,DevSection] title:@"WAUnlimitedSend" tintColor:nil];
    
    UIBarButtonItem *WAHeart = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"/Library/Application Support/WAS/WAS.bundle/heart.png"] style:UIBarButtonItemStylePlain target:self action:@selector(shareTwitterTapped:)];
    table.navigationItem.rightBarButtonItem = WAHeart;
    
    [self.navigationController pushViewController:table animated:YES];
    
}
%new
- (void)shareTwitterTapped:(id)sender {
    TWTweetComposeViewController *tw = [[TWTweetComposeViewController alloc] init];
    [tw setInitialText:@"I'm using WAUnlimitedSend for sending Unlimited videos in WhatsApp By @BandarHL"];
    [self presentViewController:tw animated:YES completion:nil];
}
%end


%hook WAMultiSendMediaItemQuality
// long long _videoMaximumBitrate;
- (double)_videoMaximumDuration {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}

%end



%hook WAVideoTranscoderDescriptor
- (void)setMaximumFileSize:(unsigned long long)arg1 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return %orig;
    }
}

- (_Bool)_requiresFileSizeReduction {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return %orig;
    }
}
- (unsigned long long)_maximumFileSize {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}
%end



%hook WAAssetCollection
- (void)storeCountOfVideosInCameraRoll:(long long)arg1 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return %orig;
    }
}
%end


%hook WAVideoPreviewViewController
- (unsigned long long)videoFileSize {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}

- (void)setVideoFileSize:(unsigned long long)arg1 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return %orig;
    }
}
%end


%hook WAVideoScrubberThumbnailBar
- (double)_videoDuration {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        
        return 9000000;
    } else {
        return %orig;
    }
}

%end

%hook WAVideoScrubberPrecisionRangeSlider

- (double)_videoDurationInSeconds {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}

- (void)setLowerValue:(float)arg1 upperValue:(float)arg2 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg2 = 9000000;
    } else {
        return %orig;
    }
}
- (void)setVideoDurationInSeconds:(double)arg1 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return %orig;
    }
}
%end


%hook WAServerProperties
+ (long long)statusVideoMaxDuration {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        return 9000000;
    } else {
        return %orig;
    }
}
+ (long long)videoMaxKiloBitrate {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}
%end

%hook WAVideoTranscoder
- (_Bool)isVideoEligibleForPassThrough {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return TRUE;
    } else {
        return %orig;
    }
}
%end

%hook WamEventVideoPlay

- (void)setVideo_Duration:(double)arg1 {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return %orig;
    }
}

- (double)video_duration {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return %orig;
    }
}

//- (double)video_size {
//    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
//    if ([defaults boolForKey:@"unlimitedVideo"]) {
//        return 9000000;
//    } else {
//        return %orig;
//    }
//}
//
//- (void)setVideo_size:(double)arg1 {
//    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
//    if ([defaults boolForKey:@"unlimitedVideo"]) {
//        arg1 = 9000000;
//    } else {
//        return %orig;
//    }
//}

%end


%hook WAMultiSendEditableVideo
- (long long)_videoFileSize {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        return 9000000;
    } else {
        return %orig;
    }
}
- (_Bool)needsFileSizeReduction {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return %orig;
    }
}
%end

