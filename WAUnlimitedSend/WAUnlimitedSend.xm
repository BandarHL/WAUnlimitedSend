#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Accounts/Accounts.h>
#import <Twitter/Twitter.h>
#import <Social/Social.h>
#import <AVFoundation/AVFoundation.h>
#import <Photos/Photos.h>
#import "FRPrefs.h"
#import "SCLAlertView.h"
#import <SDWebImage/SDImageCache.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import "BHSettingViewController.h"

%config(generator=internal)

@interface WASettingsViewController : UIViewController
-(id)addSectionAtIndex:(unsigned long long)arg1;

@end


@interface WATableSection : NSObject
-(void)setRows:(id)arg1;
@end

@interface WATableRow : NSObject
-(id)initWithCell:(id)arg1;
-(void)setHandler:(id)arg1;
@end


%hook WASettingsViewController
- (void)viewDidLoad {
    
    %orig;
    
    WATableSection *NewSection = [self addSectionAtIndex:1];
    
    WATableRow *NewRow = [[%c(WATableRow) alloc] init];
    
    UITableViewCell *Cell = [[%c(UITableViewCell) alloc] init];
    
    [Cell.textLabel setText:@"WAUnlimitedSend"];
    [Cell setAccessoryType:UITableViewCellAccessoryDisclosureIndicator];
    
    [NewRow setHandler:^{
        
        [[BHSettingViewController alloc] loadBHSettingPrefsOnViewController:self];
        
        
    }];
    
    
    [NewRow initWithCell:Cell];
    
    [NewSection setRows:@[NewRow]];
    
    
}
%end


%hook WAVideoTranscoderDescriptor
- (_Bool)_requiresFileSizeReduction {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return %orig;
    }
}
%end

%hook WAServerProperties
+ (unsigned long long)maxMediaSize {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 90000000000000000;
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

%hook WAMultiSendEditableVideo
- (_Bool)needsFileSizeReduction {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return %orig;
    }
}
%end

