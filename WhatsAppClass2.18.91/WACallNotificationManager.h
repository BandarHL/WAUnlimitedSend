//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, WACallNotificationInfo;

__attribute__((visibility("hidden")))
@interface WACallNotificationManager : NSObject
{
    NSTimer *_callNotificationTimer;
    WACallNotificationInfo *_currentCallNotificationInfo;
    _Bool _shouldAutoAcceptTheCallFromPush;
    _Bool _callRejectedViaNotificationAction;
    NSString *_callIdFromPush;
    NSString *_callIdFromLocalNotification;
}

@property(nonatomic) _Bool callRejectedViaNotificationAction; // @synthesize callRejectedViaNotificationAction=_callRejectedViaNotificationAction;
@property(copy, nonatomic) NSString *callIdFromLocalNotification; // @synthesize callIdFromLocalNotification=_callIdFromLocalNotification;
@property(nonatomic) _Bool shouldAutoAcceptTheCallFromPush; // @synthesize shouldAutoAcceptTheCallFromPush=_shouldAutoAcceptTheCallFromPush;
@property(copy, nonatomic) NSString *callIdFromPush; // @synthesize callIdFromPush=_callIdFromPush;
- (void).cxx_destruct;
- (void)showCallNotificationForCallNotificationInfo:(id)arg1;
- (void)showIncomingCallNotificationForCallID:(id)arg1 callerJID:(id)arg2 callerPushName:(id)arg3 participantsJID:(id)arg4 videoEnabled:(_Bool)arg5;
- (void)showMissedCallNotificationForCallID:(id)arg1 callerJID:(id)arg2 callerPushName:(id)arg3 participantsJID:(id)arg4 videoEnabled:(_Bool)arg5;
- (void)showVideoCallUpgradeNotification;
- (void)cancelCallNotificationTimer;
- (_Bool)shouldCancelTimer;
- (void)callLocalNotificationTimerFired:(id)arg1;
- (void)startCallNotificationTimer;
- (void)resetCallState;
- (void)clearNotificationInformation;

@end
