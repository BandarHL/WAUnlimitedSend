//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WATwoFactorRegistrationViewController;

@protocol WATwoFactorRegistrationViewControllerDelegate <NSObject>
- (void)registrationViewControllerVerificationDidCancel:(WATwoFactorRegistrationViewController *)arg1;
- (void)registrationViewControllerVerificationDidFail:(WATwoFactorRegistrationViewController *)arg1;
- (void)registrationViewControllerVerificationDidSucceed:(WATwoFactorRegistrationViewController *)arg1 normalizedNumber:(NSString *)arg2 countryCode:(NSString *)arg3;
@end
