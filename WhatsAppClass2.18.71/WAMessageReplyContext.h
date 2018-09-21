//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIImage, WAChatSession, WAMessage;

__attribute__((visibility("hidden")))
@interface WAMessageReplyContext : NSObject
{
    NSAttributedString *_cachedAttributedStringForPreview;
    NSAttributedString *_cachedAttributedStringForBubble;
    NSString *_vCardJID;
    UIImage *_fallbackThumbnailImage;
    int _fallbackMessageType;
    int _fallbackMediaOrigin;
    _Bool _fallbackIsStatus;
    _Bool _fallbackIsFromMe;
    _Bool _fallbackIsPayment;
    _Bool _hasVerifiedBadge;
    _Bool _rendersLargeEmoji;
    UIColor *_color;
    UIColor *_senderNameColor;
    WAMessage *_quotedMessage;
    WAChatSession *_quotedChatSession;
    NSString *_senderName;
    NSString *_senderPushName;
    NSAttributedString *_snippet;
}

+ (id)textFormatter;
@property(readonly, nonatomic) _Bool rendersLargeEmoji; // @synthesize rendersLargeEmoji=_rendersLargeEmoji;
@property(readonly, nonatomic) _Bool hasVerifiedBadge; // @synthesize hasVerifiedBadge=_hasVerifiedBadge;
@property(readonly, copy, nonatomic) NSAttributedString *snippet; // @synthesize snippet=_snippet;
@property(readonly, copy, nonatomic) NSString *senderPushName; // @synthesize senderPushName=_senderPushName;
@property(readonly, copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(readonly, nonatomic) WAChatSession *quotedChatSession; // @synthesize quotedChatSession=_quotedChatSession;
@property(readonly, nonatomic) WAMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly, nonatomic) UIColor *senderNameColor; // @synthesize senderNameColor=_senderNameColor;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)fetchVCardThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureWithVCardString:(id)arg1;
- (void)fetchThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasThumbnail;
- (id)attributedStringForStyle:(unsigned long long)arg1;
- (id)formattedSenderName;
@property(readonly, nonatomic) _Bool isStatusMessage;
@property(readonly, nonatomic) int messageType;
- (void)fontSizeDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithQuotedChatSession:(id)arg1;
- (id)initWithQuotedMessage:(id)arg1;
- (id)initWithMessageReply:(id)arg1;

@end
