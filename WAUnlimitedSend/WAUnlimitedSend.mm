#line 1 "/Users/mac/Desktop/أدواتي/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"
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
@class WAMultiSendEditableVideo; @class WAVideoTranscoderDescriptor; @class UITableViewCell; @class WASettingsViewController; @class WAVideoTranscoder; @class WATableRow; @class WAServerProperties; 
static Class _logos_superclass$_ungrouped$WASettingsViewController; static void (*_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAVideoTranscoderDescriptor; static _Bool (*_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST, SEL);static Class _logos_supermetaclass$_ungrouped$WAServerProperties; static unsigned long long (*_logos_meta_orig$_ungrouped$WAServerProperties$maxMediaSize)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAVideoTranscoder; static _Bool (*_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough)(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoder* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$WAMultiSendEditableVideo; static _Bool (*_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction)(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST, SEL);
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$UITableViewCell(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("UITableViewCell"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WATableRow(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WATableRow"); } return _klass; }
#line 32 "/Users/mac/Desktop/أدواتي/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"

static void _logos_method$_ungrouped$WASettingsViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WASettingsViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    
    (_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad ? _logos_orig$_ungrouped$WASettingsViewController$viewDidLoad : (__typeof__(_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad))class_getMethodImplementation(_logos_superclass$_ungrouped$WASettingsViewController, @selector(viewDidLoad)))(self, _cmd);
    
    WATableSection *NewSection = [self addSectionAtIndex:1];
    
    WATableRow *NewRow = [[_logos_static_class_lookup$WATableRow() alloc] init];
    
    UITableViewCell *Cell = [[_logos_static_class_lookup$UITableViewCell() alloc] init];
    
    [Cell.textLabel setText:@"WAUnlimitedSend"];
    [Cell setAccessoryType:UITableViewCellAccessoryDisclosureIndicator];
    
    [NewRow setHandler:^{
        
        [[BHSettingViewController alloc] loadBHSettingPrefsOnViewController:self];
        
        
    }];
    
    
    [NewRow initWithCell:Cell];
    
    [NewSection setRows:@[NewRow]];
    
    
}




static _Bool _logos_method$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction(_LOGOS_SELF_TYPE_NORMAL WAVideoTranscoderDescriptor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return (_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction ? _logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction : (__typeof__(_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction))class_getMethodImplementation(_logos_superclass$_ungrouped$WAVideoTranscoderDescriptor, @selector(_requiresFileSizeReduction)))(self, _cmd);
    }
}



static unsigned long long _logos_meta_method$_ungrouped$WAServerProperties$maxMediaSize(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return 90000000000000000;
    } else {
        return (_logos_meta_orig$_ungrouped$WAServerProperties$maxMediaSize ? _logos_meta_orig$_ungrouped$WAServerProperties$maxMediaSize : (__typeof__(_logos_meta_orig$_ungrouped$WAServerProperties$maxMediaSize))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$WAServerProperties, @selector(maxMediaSize)))(self, _cmd);
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



static _Bool _logos_method$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction(_LOGOS_SELF_TYPE_NORMAL WAMultiSendEditableVideo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if ([defaults boolForKey:@"unlimitedVideo"]) {
    return FALSE;
    } else {
        return (_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction ? _logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction : (__typeof__(_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction))class_getMethodImplementation(_logos_superclass$_ungrouped$WAMultiSendEditableVideo, @selector(needsFileSizeReduction)))(self, _cmd);
    }
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WASettingsViewController = objc_getClass("WASettingsViewController"); _logos_superclass$_ungrouped$WASettingsViewController = class_getSuperclass(_logos_class$_ungrouped$WASettingsViewController); { _logos_register_hook$(_logos_class$_ungrouped$WASettingsViewController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$WASettingsViewController$viewDidLoad, (IMP *)&_logos_orig$_ungrouped$WASettingsViewController$viewDidLoad);}Class _logos_class$_ungrouped$WAVideoTranscoderDescriptor = objc_getClass("WAVideoTranscoderDescriptor"); _logos_superclass$_ungrouped$WAVideoTranscoderDescriptor = class_getSuperclass(_logos_class$_ungrouped$WAVideoTranscoderDescriptor); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoderDescriptor, @selector(_requiresFileSizeReduction), (IMP)&_logos_method$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoderDescriptor$_requiresFileSizeReduction);}Class _logos_class$_ungrouped$WAServerProperties = objc_getClass("WAServerProperties"); Class _logos_metaclass$_ungrouped$WAServerProperties = object_getClass(_logos_class$_ungrouped$WAServerProperties); _logos_supermetaclass$_ungrouped$WAServerProperties = class_getSuperclass(_logos_metaclass$_ungrouped$WAServerProperties); { _logos_register_hook$(_logos_metaclass$_ungrouped$WAServerProperties, @selector(maxMediaSize), (IMP)&_logos_meta_method$_ungrouped$WAServerProperties$maxMediaSize, (IMP *)&_logos_meta_orig$_ungrouped$WAServerProperties$maxMediaSize);}Class _logos_class$_ungrouped$WAVideoTranscoder = objc_getClass("WAVideoTranscoder"); _logos_superclass$_ungrouped$WAVideoTranscoder = class_getSuperclass(_logos_class$_ungrouped$WAVideoTranscoder); { _logos_register_hook$(_logos_class$_ungrouped$WAVideoTranscoder, @selector(isVideoEligibleForPassThrough), (IMP)&_logos_method$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough, (IMP *)&_logos_orig$_ungrouped$WAVideoTranscoder$isVideoEligibleForPassThrough);}Class _logos_class$_ungrouped$WAMultiSendEditableVideo = objc_getClass("WAMultiSendEditableVideo"); _logos_superclass$_ungrouped$WAMultiSendEditableVideo = class_getSuperclass(_logos_class$_ungrouped$WAMultiSendEditableVideo); { _logos_register_hook$(_logos_class$_ungrouped$WAMultiSendEditableVideo, @selector(needsFileSizeReduction), (IMP)&_logos_method$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction, (IMP *)&_logos_orig$_ungrouped$WAMultiSendEditableVideo$needsFileSizeReduction);}} }
#line 107 "/Users/mac/Desktop/أدواتي/WAUnlimitedSend/WAUnlimitedSend/WAUnlimitedSend.xm"
