//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAssetManagerDelegate-Protocol.h"

@class NSString, WAAssetManager, WAAssetMetadataManager, WAPersistentKeyValueStore;

__attribute__((visibility("hidden")))
@interface WAFontAssetManager : NSObject <WAAssetManagerDelegate>
{
    WAAssetMetadataManager *_metadataManager;
    WAAssetManager *_assetManager;
    _Bool _isAssetManagerInitialized;
    CDUnknownBlockType _backgroundURLSessionCompletionHandler;
    WAPersistentKeyValueStore *_localKeyValueStore;
}

+ (id)backgroundURLSessionConfiguration;
@property(readonly, nonatomic) WAPersistentKeyValueStore *localKeyValueStore; // @synthesize localKeyValueStore=_localKeyValueStore;
- (void).cxx_destruct;
- (void)assetManagerDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)downloadFontWithName:(id)arg1 url:(id)arg2;
- (void)downloadFontWithName:(id)arg1;
- (_Bool)registerFontWithName:(id)arg1;
- (void)setupAssetManagerIfNecessary;
- (void)handleEventsForBackgroundURLSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLocalKeyValueStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
