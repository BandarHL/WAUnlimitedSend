//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WACloudKitManager : NSObject
{
    // Error parsing type: , name: keyManager
    // Error parsing type: , name: userJID
    // Error parsing type: , name: container
    // Error parsing type: , name: keyValueStore
    // Error parsing type: , name: chatStorage
    // Error parsing type: , name: xmppConnection
    // Error parsing type: , name: networkUsageManager
    // Error parsing type: , name: fixedFiles
    // Error parsing type: , name: mediaDeleter
    // Error parsing type: , name: isBackingUp
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (CDUnknownBlockType)removeMessagesFromNextBackup:(id)arg1;
- (id)initWithUserJID:(id)arg1 container:(id)arg2 keyValueStore:(id)arg3 chatStorage:(id)arg4 xmppConnection:(id)arg5 callLogger:(id)arg6 backedUpKeyValueStore:(id)arg7 userDefaults:(id)arg8 networkUsageManager:(id)arg9 wallpaperFileURL:(id)arg10;

@end
