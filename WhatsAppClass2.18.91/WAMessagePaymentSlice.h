//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIFont, WAWeakTimer;
@protocol WAMessagePaymentSliceDelegate;

__attribute__((visibility("hidden")))
@interface WAMessagePaymentSlice : WAMessageContainerSlice
{
    NSTextStorage *_amountTextStorage;
    NSTextContainer *_amountTextContainer;
    NSLayoutManager *_amountLayoutManager;
    struct CGRect _amountTextRect;
    WAWeakTimer *_timer;
    NSString *_groupDetailsText;
    NSString *_transactionDetailsText;
    NSTextStorage *_statusTextStorage;
    NSTextContainer *_statusTextContainer;
    NSLayoutManager *_statusLayoutManager;
    struct CGRect _statusTextRect;
    struct CGRect _statusLastLineRect;
    struct CGSize _statusTextFittedSize;
    _Bool _isStatusSingleLine;
    NSTextStorage *_statusIconTextStorage;
    NSLayoutManager *_statusIconLayoutManager;
    NSTextContainer *_statusIconTextContainer;
    struct CGSize _statusIconFittedSize;
    double _statusChinHeight;
    _Bool _isToOrFromMeTransaction;
    UIFont *_currentMajorAmountFont;
    struct _NSRange _currencyRange;
    struct _NSRange _majorDigitsRange;
    struct _NSRange _minorDigitsRange;
    _Bool _fromMe;
    id <WAMessagePaymentSliceDelegate> _delegate;
    NSString *_messageUniqueID;
    double _transactionAmountAreaHeight;
}

+ (Class)viewClass;
@property(nonatomic) double transactionAmountAreaHeight; // @synthesize transactionAmountAreaHeight=_transactionAmountAreaHeight;
@property(readonly, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
@property(nonatomic) __weak id <WAMessagePaymentSliceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe; // @synthesize fromMe=_fromMe;
- (void).cxx_destruct;
- (void)drawStatusInCurrentContextAtPoint:(struct CGPoint)arg1;
- (void)statusFitToWidth:(double)arg1;
- (void)setUpStatusTextStorageWithMessage:(id)arg1;
- (void)invalidateExpirationTextIfNeeded;
- (void)scheduleTimerToInvalidateExpirationText:(double)arg1;
- (double)calculateAmountWidth;
- (void)amountFitToWidth:(double)arg1;
- (void)updateAmountFontSizeToFont:(id)arg1;
- (id)attributedTextWithMessage:(id)arg1;
- (id)amountMinorAttributesForMajorFont:(id)arg1;
- (id)amountMajorAttributesForMajorFont:(id)arg1;
- (void)calculateTrailingCornerUnusedSpaceInWidth:(double)arg1;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (void)setUpAmountTextStorageWithMessage:(id)arg1;
- (id)initWithMessages:(id)arg1 expirationDate:(id)arg2 metrics:(CDStruct_8ee84fd7)arg3;

@end
