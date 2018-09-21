#line 1 "/Users/mac/Desktop/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Accounts/Accounts.h>
#import <Twitter/Twitter.h>
#import <Social/Social.h>
#import <AVFoundation/AVFoundation.h>
#import <Photos/Photos.h>
#import "FRPrefs.h"
#import "SCLAlertView.h"



@interface WASettingsViewController : UIViewController
@end

@interface WASettingsViewController (WAUnlimitedSend)
@end


#include <objc/message.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

__attribute__((unused)) static void _logos_register_hook$(Class _class, SEL _cmd, IMP _new, IMP *_old) {
unsigned int _count, _i;
Class _searchedClass = _class;
Method *_methods;
while (_searchedClass) {
_methods = class_copyMethodList(_searchedClass, &_count);
for (_i = 0; _i < _count; _i++) {
if (method_getName(_methods[_i]) == _cmd) {
if (_class == _searchedClass) {
*_old = method_getImplementation(_methods[_i]);
*_old = method_setImplementation(_methods[_i], _new);
} else {
class_addMethod(_class, _cmd, _new, method_getTypeEncoding(_methods[_i]));
}
free(_methods);
return;
}
}
free(_methods);
_searchedClass = class_getSuperclass(_searchedClass);
}
}
@class WASettingsViewController; @class WAVideoTranscoderDescriptor; @class WAVideoTranscoder; @class WAVideoScrubberPrecisionRangeSlider; @class WAVideoScrubberThumbnailBar; @class WAAssetCollection; @class WAMultiSendEditableVideo; @class WamEventVideoPlay; @class WAMultiSendMediaItemQuality; @class WAServerProperties; @class WAVideoPreviewViewController; 
static Class _logos_superclass$_ungrouped$WASettingsViewController; static void (*_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAMultiSendMediaItemQuality; static double (*_logos_orig$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration)(_LOGOS_SELF_TYPE_NORMAL WAMultiSendMediaItemQuality* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAVideoTranscoderDescriptor; static void (*_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST, SEL, unsigned long long);static _Bool (*_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAAssetCollection; static void (*_logos_orig$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$)(_LOGOS_SELF_TYPE_NORMAL WAAssetCollection* _LOGOS_SELF_CONST, SEL, long long);static Class _logos_superclass$_ungrouped$WAVideoPreviewViewController; static unsigned long long (*_logos_orig$_ungrouped$WAVideoPreviewViewController$videoFileSize)(_LOGOS_SELF_TYPE_NORMAL WAVideoPreviewViewController* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$)(_LOGOS_SELF_TYPE_NORMAL WAVideoPreviewViewController* _LOGOS_SELF_CONST, SEL, unsigned long long);static Class _logos_superclass$_ungrouped$WAVideoScrubberThumbnailBar; static double (*_logos_orig$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration)(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberThumbnailBar* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAVideoScrubberPrecisionRangeSlider; static double (*_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds)(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$)(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST, SEL, float, float);static void (*_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$)(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST, SEL, double);static Class _logos_supermetaclass$_ungrouped$WAServerProperties; static long long (*_logos_meta_orig$_ungrouped$WAServerProperties$statusVideoMaxDuration)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static long long (*_logos_meta_orig$_ungrouped$WAServerProperties$videoMaxKiloBitrate)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAVideoTranscoder; static _Bool (*_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoder* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WamEventVideoPlay; static void (*_logos_orig$_ungrouped$WamEventVideoPlay$setVideo_Duration$)(_LOGOS_SELF_TYPE_NORMAL WamEventVideoPlay* _LOGOS_SELF_CONST, SEL, double);static double (*_logos_orig$_ungrouped$WamEventVideoPlay$video_duration)(_LOGOS_SELF_TYPE_NORMAL WamEventVideoPlay* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAMultiSendEditableVideo; static long long (*_logos_orig$_ungrouped$WAMultiSendEditableVideo$_videoFileSize)(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST, SEL);static _Bool (*_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction)(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST, SEL);

#line 19 "/Users/mac/Desktop/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"

static void _logos_method$_ungrouped$WASettingsViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    (_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad ? _logos_orig$_ungrouped$WASettingsViewController$viewDidLoad : (__typeof__(_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad))class_getMethodImplementation(_logos_superclass$_ungrouped$WASettingsViewController, @selector(viewDidLoad)))(self, _cmd);
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"WAS" style:UIBarButtonItemStylePlain target:self action:@selector(DidEnterSetting:)];
}

static void _logos_method$_ungrouped$WASettingsViewController$DidEnterSetting$(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id sender) {
    NSURL *profileimage = [[NSURL alloc] initWithString:@"https://arab-dev.net/bd/BandarHL.png"];
    NSData *data1 = [NSData dataWithContentsOfURL:profileimage];
    





    
    
    
    
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

static void _logos_method$_ungrouped$WASettingsViewController$shareTwitterTapped$(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id sender) {
    TWTweetComposeViewController *tw = [[TWTweetComposeViewController alloc] init];
    [tw setInitialText:@"I'm using WAUnlimitedSend for sending Unlimited videos in WhatsApp By @BandarHL"];
    [self presentViewController:tw animated:YES completion:nil];
}





static double _logos_method$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration(_LOGOS_SELF_TYPE_NORMAL WAMultiSendMediaItemQuality* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration ? _logos_orig$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration : (__typeof__(_logos_orig$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration))class_getMethodImplementation(_logos_superclass$_ungrouped$WAMultiSendMediaItemQuality, @selector(_videoMaximumDuration)))(self, _cmd);
    }
}






static void _logos_method$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$ ? _logos_orig$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$ : (__typeof__(_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoTranscoderDescriptor, @selector(setMaximumFileSize:)))(self, _cmd, arg1);
    }
}

static _Bool _logos_method$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return (_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction ? _logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction : (__typeof__(_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoTranscoderDescriptor, @selector(_requiresFileSizeReduction)))(self, _cmd);
    }
}
static unsigned long long _logos_method$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize ? _logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize : (__typeof__(_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoTranscoderDescriptor, @selector(_maximumFileSize)))(self, _cmd);
    }
}





static void _logos_method$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$(_LOGOS_SELF_TYPE_NORMAL WAAssetCollection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$ ? _logos_orig$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$ : (__typeof__(_logos_orig$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$))class_getMethodImplementation(_logos_superclass$_ungrouped$WAAssetCollection, @selector(storeCountOfVideosInCameraRoll:)))(self, _cmd, arg1);
    }
}




static unsigned long long _logos_method$_ungrouped$WAVideoPreviewViewController$videoFileSize(_LOGOS_SELF_TYPE_NORMAL WAVideoPreviewViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoPreviewViewController$videoFileSize ? _logos_orig$_ungrouped$WAVideoPreviewViewController$videoFileSize : (__typeof__(_logos_orig$_ungrouped$WAVideoPreviewViewController$videoFileSize))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoPreviewViewController, @selector(videoFileSize)))(self, _cmd);
    }
}

static void _logos_method$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$(_LOGOS_SELF_TYPE_NORMAL WAVideoPreviewViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$ ? _logos_orig$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$ : (__typeof__(_logos_orig$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoPreviewViewController, @selector(setVideoFileSize:)))(self, _cmd, arg1);
    }
}




static double _logos_method$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberThumbnailBar* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        
        return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration ? _logos_orig$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration : (__typeof__(_logos_orig$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoScrubberThumbnailBar, @selector(_videoDuration)))(self, _cmd);
    }
}





static double _logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds ? _logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds : (__typeof__(_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(_videoDurationInSeconds)))(self, _cmd);
    }
}

static void _logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1, float arg2) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg2 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$ ? _logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$ : (__typeof__(_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(setLowerValue:upperValue:)))(self, _cmd, arg1, arg2);
    }
}
static void _logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$(_LOGOS_SELF_TYPE_NORMAL WAVideoScrubberPrecisionRangeSlider* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$ ? _logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$ : (__typeof__(_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(setVideoDurationInSeconds:)))(self, _cmd, arg1);
    }
}




static long long _logos_meta_method$_ungrouped$WAServerProperties$statusVideoMaxDuration(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        return 9000000;
    } else {
        return (_logos_meta_orig$_ungrouped$WAServerProperties$statusVideoMaxDuration ? _logos_meta_orig$_ungrouped$WAServerProperties$statusVideoMaxDuration : (__typeof__(_logos_meta_orig$_ungrouped$WAServerProperties$statusVideoMaxDuration))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$WAServerProperties, @selector(statusVideoMaxDuration)))(self, _cmd);
    }
}
static long long _logos_meta_method$_ungrouped$WAServerProperties$videoMaxKiloBitrate(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_meta_orig$_ungrouped$WAServerProperties$videoMaxKiloBitrate ? _logos_meta_orig$_ungrouped$WAServerProperties$videoMaxKiloBitrate : (__typeof__(_logos_meta_orig$_ungrouped$WAServerProperties$videoMaxKiloBitrate))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$WAServerProperties, @selector(videoMaxKiloBitrate)))(self, _cmd);
    }
}



static _Bool _logos_method$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoder* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return TRUE;
    } else {
        return (_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough ? _logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough : (__typeof__(_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoTranscoder, @selector(isVideoEligibleForPassThrough)))(self, _cmd);
    }
}




static void _logos_method$_ungrouped$WamEventVideoPlay$setVideo_Duration$(_LOGOS_SELF_TYPE_NORMAL WamEventVideoPlay* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    arg1 = 9000000;
    } else {
        return (_logos_orig$_ungrouped$WamEventVideoPlay$setVideo_Duration$ ? _logos_orig$_ungrouped$WamEventVideoPlay$setVideo_Duration$ : (__typeof__(_logos_orig$_ungrouped$WamEventVideoPlay$setVideo_Duration$))class_getMethodImplementation(_logos_superclass$_ungrouped$WamEventVideoPlay, @selector(setVideo_Duration:)))(self, _cmd, arg1);
    }
}

static double _logos_method$_ungrouped$WamEventVideoPlay$video_duration(_LOGOS_SELF_TYPE_NORMAL WamEventVideoPlay* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WamEventVideoPlay$video_duration ? _logos_orig$_ungrouped$WamEventVideoPlay$video_duration : (__typeof__(_logos_orig$_ungrouped$WamEventVideoPlay$video_duration))class_getMethodImplementation(_logos_superclass$_ungrouped$WamEventVideoPlay, @selector(video_duration)))(self, _cmd);
    }
}























static long long _logos_method$_ungrouped$WAMultiSendEditableVideo$_videoFileSize(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
        return 9000000;
    } else {
        return (_logos_orig$_ungrouped$WAMultiSendEditableVideo$_videoFileSize ? _logos_orig$_ungrouped$WAMultiSendEditableVideo$_videoFileSize : (__typeof__(_logos_orig$_ungrouped$WAMultiSendEditableVideo$_videoFileSize))class_getMethodImplementation(_logos_superclass$_ungrouped$WAMultiSendEditableVideo, @selector(_videoFileSize)))(self, _cmd);
    }
}
static _Bool _logos_method$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return (_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction ? _logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction : (__typeof__(_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction))class_getMethodImplementation(_logos_superclass$_ungrouped$WAMultiSendEditableVideo, @selector(needsFileSizeReduction)))(self, _cmd);
    }
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WASettingsViewController = objc_getClass("WASettingsViewController"); _logos_superclass$_ungrouped$WASettingsViewController = class_getSuperclass(_logos_class$_ungrouped$WASettingsViewController); { _logos_register_hook$(_logos_class$_ungrouped$WASettingsViewController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$WASettingsViewController$viewDidLoad, (IMP *)&_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad);}{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WASettingsViewController, @selector(DidEnterSetting:), (IMP)&_logos_method$_ungrouped$WASettingsViewController$DidEnterSetting$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WASettingsViewController, @selector(shareTwitterTapped:), (IMP)&_logos_method$_ungrouped$WASettingsViewController$shareTwitterTapped$, _typeEncoding); }Class _logos_class$_ungrouped$WAMultiSendMediaItemQuality = objc_getClass("WAMultiSendMediaItemQuality"); _logos_superclass$_ungrouped$WAMultiSendMediaItemQuality = class_getSuperclass(_logos_class$_ungrouped$WAMultiSendMediaItemQuality); { _logos_register_hook$(_logos_class$_ungrouped$WAMultiSendMediaItemQuality, @selector(_videoMaximumDuration), (IMP)&_logos_method$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration, (IMP *)&_logos_orig$_ungrouped$WAMultiSendMediaItemQuality$_videoMaximumDuration);}Class _logos_class$_ungrouped$WAVideoTranscoderDescriptor = objc_getClass("WAVideoTranscoderDescriptor"); _logos_superclass$_ungrouped$WAVideoTranscoderDescriptor = class_getSuperclass(_logos_class$_ungrouped$WAVideoTranscoderDescriptor); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoderDescriptor, @selector(setMaximumFileSize:), (IMP)&_logos_method$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$setMaximumFileSize$);}{ _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoderDescriptor, @selector(_requiresFileSizeReduction), (IMP)&_logos_method$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction);}{ _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoderDescriptor, @selector(_maximumFileSize), (IMP)&_logos_method$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_maximumFileSize);}Class _logos_class$_ungrouped$WAAssetCollection = objc_getClass("WAAssetCollection"); _logos_superclass$_ungrouped$WAAssetCollection = class_getSuperclass(_logos_class$_ungrouped$WAAssetCollection); { _logos_register_hook$(_logos_class$_ungrouped$WAAssetCollection, @selector(storeCountOfVideosInCameraRoll:), (IMP)&_logos_method$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$, (IMP *)&_logos_orig$_ungrouped$WAAssetCollection$storeCountOfVideosInCameraRoll$);}Class _logos_class$_ungrouped$WAVideoPreviewViewController = objc_getClass("WAVideoPreviewViewController"); _logos_superclass$_ungrouped$WAVideoPreviewViewController = class_getSuperclass(_logos_class$_ungrouped$WAVideoPreviewViewController); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoPreviewViewController, @selector(videoFileSize), (IMP)&_logos_method$_ungrouped$WAVideoPreviewViewController$videoFileSize, (IMP *)&_logos_orig$_ungrouped$WAVideoPreviewViewController$videoFileSize);}{ _logos_register_hook$(_logos_class$_ungrouped$WAVideoPreviewViewController, @selector(setVideoFileSize:), (IMP)&_logos_method$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$, (IMP *)&_logos_orig$_ungrouped$WAVideoPreviewViewController$setVideoFileSize$);}Class _logos_class$_ungrouped$WAVideoScrubberThumbnailBar = objc_getClass("WAVideoScrubberThumbnailBar"); _logos_superclass$_ungrouped$WAVideoScrubberThumbnailBar = class_getSuperclass(_logos_class$_ungrouped$WAVideoScrubberThumbnailBar); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoScrubberThumbnailBar, @selector(_videoDuration), (IMP)&_logos_method$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration, (IMP *)&_logos_orig$_ungrouped$WAVideoScrubberThumbnailBar$_videoDuration);}Class _logos_class$_ungrouped$WAVideoScrubberPrecisionRangeSlider = objc_getClass("WAVideoScrubberPrecisionRangeSlider"); _logos_superclass$_ungrouped$WAVideoScrubberPrecisionRangeSlider = class_getSuperclass(_logos_class$_ungrouped$WAVideoScrubberPrecisionRangeSlider); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(_videoDurationInSeconds), (IMP)&_logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds, (IMP *)&_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$_videoDurationInSeconds);}{ _logos_register_hook$(_logos_class$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(setLowerValue:upperValue:), (IMP)&_logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$, (IMP *)&_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setLowerValue$upperValue$);}{ _logos_register_hook$(_logos_class$_ungrouped$WAVideoScrubberPrecisionRangeSlider, @selector(setVideoDurationInSeconds:), (IMP)&_logos_method$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$, (IMP *)&_logos_orig$_ungrouped$WAVideoScrubberPrecisionRangeSlider$setVideoDurationInSeconds$);}Class _logos_class$_ungrouped$WAServerProperties = objc_getClass("WAServerProperties"); Class _logos_metaclass$_ungrouped$WAServerProperties = object_getClass(_logos_class$_ungrouped$WAServerProperties); _logos_supermetaclass$_ungrouped$WAServerProperties = class_getSuperclass(_logos_metaclass$_ungrouped$WAServerProperties); { _logos_register_hook$(_logos_metaclass$_ungrouped$WAServerProperties, @selector(statusVideoMaxDuration), (IMP)&_logos_meta_method$_ungrouped$WAServerProperties$statusVideoMaxDuration, (IMP *)&_logos_meta_orig$_ungrouped$WAServerProperties$statusVideoMaxDuration);}{ _logos_register_hook$(_logos_metaclass$_ungrouped$WAServerProperties, @selector(videoMaxKiloBitrate), (IMP)&_logos_meta_method$_ungrouped$WAServerProperties$videoMaxKiloBitrate, (IMP *)&_logos_meta_orig$_ungrouped$WAServerProperties$videoMaxKiloBitrate);}Class _logos_class$_ungrouped$WAVideoTranscoder = objc_getClass("WAVideoTranscoder"); _logos_superclass$_ungrouped$WAVideoTranscoder = class_getSuperclass(_logos_class$_ungrouped$WAVideoTranscoder); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoder, @selector(isVideoEligibleForPassThrough), (IMP)&_logos_method$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough);}Class _logos_class$_ungrouped$WamEventVideoPlay = objc_getClass("WamEventVideoPlay"); _logos_superclass$_ungrouped$WamEventVideoPlay = class_getSuperclass(_logos_class$_ungrouped$WamEventVideoPlay); { _logos_register_hook$(_logos_class$_ungrouped$WamEventVideoPlay, @selector(setVideo_Duration:), (IMP)&_logos_method$_ungrouped$WamEventVideoPlay$setVideo_Duration$, (IMP *)&_logos_orig$_ungrouped$WamEventVideoPlay$setVideo_Duration$);}{ _logos_register_hook$(_logos_class$_ungrouped$WamEventVideoPlay, @selector(video_duration), (IMP)&_logos_method$_ungrouped$WamEventVideoPlay$video_duration, (IMP *)&_logos_orig$_ungrouped$WamEventVideoPlay$video_duration);}Class _logos_class$_ungrouped$WAMultiSendEditableVideo = objc_getClass("WAMultiSendEditableVideo"); _logos_superclass$_ungrouped$WAMultiSendEditableVideo = class_getSuperclass(_logos_class$_ungrouped$WAMultiSendEditableVideo); { _logos_register_hook$(_logos_class$_ungrouped$WAMultiSendEditableVideo, @selector(_videoFileSize), (IMP)&_logos_method$_ungrouped$WAMultiSendEditableVideo$_videoFileSize, (IMP *)&_logos_orig$_ungrouped$WAMultiSendEditableVideo$_videoFileSize);}{ _logos_register_hook$(_logos_class$_ungrouped$WAMultiSendEditableVideo, @selector(needsFileSizeReduction), (IMP)&_logos_method$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction, (IMP *)&_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction);}} }
#line 301 "/Users/mac/Desktop/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"
