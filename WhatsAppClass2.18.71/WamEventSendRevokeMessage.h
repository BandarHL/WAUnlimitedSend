//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventSendRevokeMessage : WamEvent
{
    NSNumber *_message_type_number;
    NSNumber *_message_media_type_number;
    double _revoke_send_delay;
}

@property(nonatomic) double revoke_send_delay; // @synthesize revoke_send_delay=_revoke_send_delay;
- (void).cxx_destruct;
@property(nonatomic) long long message_media_type;
- (_Bool)is_message_media_type_set;
@property(nonatomic) long long message_type;
- (_Bool)is_message_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
