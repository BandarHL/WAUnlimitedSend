//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSSet, WAContactsStorage;

@protocol WAContactsStorageDelegate
- (void)contactsStorage:(WAContactsStorage *)arg1 didAddOrUpdateContacts:(NSDictionary *)arg2 didRemoveJIDs:(NSSet *)arg3 removeMissingJIDs:(_Bool)arg4;
- (void)contactsStorageDidUpdateStatus:(WAContactsStorage *)arg1;
- (void)contactsStorageDidUpdateContacts:(WAContactsStorage *)arg1;
@end
