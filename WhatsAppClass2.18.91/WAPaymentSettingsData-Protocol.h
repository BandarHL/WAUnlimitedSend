//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDecimalNumber, NSString, WAPaymentCurrencySettings;

@protocol WAPaymentSettingsData <NSObject>
@property(nonatomic, readonly) BOOL amountPrecision;
@property(nonatomic, readonly) NSDecimalNumber *maximumAmount;
@property(nonatomic, readonly) NSDecimalNumber *minimumAmount;
@property(nonatomic, readonly) int defaultPayoutMethodType;
@property(nonatomic, readonly) int defaultPaymentMethodType;
@property(nonatomic, readonly) WAPaymentCurrencySettings *currencySettings;
@property(nonatomic, readonly) NSString *countryCode;
@end
