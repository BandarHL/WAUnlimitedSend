//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WABlockedContactsList.h>

@interface WABlockedContactsList (MainApp)
- (void)syncedContactListDidUpdate:(id)arg1;
- (void)fetchJIDsForSyncedContactList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncedContactList:(id)arg1 didRequestSendJIDs:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)permanentlySaveJIDs:(id)arg1 forSyncedContactList:(id)arg2;
- (void)setNeedsDownstreamSync;
- (void)MAIN_APP_setNeedsDownstreamSync;
- (void)unblockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)blockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end
