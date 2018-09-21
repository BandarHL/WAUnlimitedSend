//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WACallViewParticipantInfo : NSObject
{
    _Bool _participantSelf;
    _Bool _incoming;
    _Bool _ringing;
    _Bool _interrupted;
    _Bool _muted;
    _Bool _trafficStopped;
    _Bool _invitingToGroupCall;
    _Bool _videoStopped;
    _Bool _videoPaused;
    _Bool _videoDecodePaused;
    _Bool _videoDecodeStarted;
    _Bool _offeringVideoUpgrade;
    int _endReason;
    NSString *_jid;
}

@property(nonatomic) _Bool offeringVideoUpgrade; // @synthesize offeringVideoUpgrade=_offeringVideoUpgrade;
@property(nonatomic) _Bool videoDecodeStarted; // @synthesize videoDecodeStarted=_videoDecodeStarted;
@property(nonatomic) _Bool videoDecodePaused; // @synthesize videoDecodePaused=_videoDecodePaused;
@property(nonatomic) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic) _Bool videoStopped; // @synthesize videoStopped=_videoStopped;
@property(nonatomic) _Bool invitingToGroupCall; // @synthesize invitingToGroupCall=_invitingToGroupCall;
@property(nonatomic) _Bool trafficStopped; // @synthesize trafficStopped=_trafficStopped;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(nonatomic) _Bool ringing; // @synthesize ringing=_ringing;
@property(nonatomic) _Bool incoming; // @synthesize incoming=_incoming;
@property(nonatomic) int endReason; // @synthesize endReason=_endReason;
@property(nonatomic) _Bool participantSelf; // @synthesize participantSelf=_participantSelf;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *firstName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
