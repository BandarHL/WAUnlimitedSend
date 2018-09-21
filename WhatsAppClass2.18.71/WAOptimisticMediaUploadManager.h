//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAMediaDownloadPolicy, WAMediaUploader, WAOptimisticMediaUploadStateManager;

__attribute__((visibility("hidden")))
@interface WAOptimisticMediaUploadManager : NSObject
{
    WAMediaUploader *_mediaUploader;
    WAOptimisticMediaUploadStateManager *_optimisticMediaUploadStateManager;
    NSMutableDictionary *_optimisticMediaUploadItemForIdentifier;
    NSMutableDictionary *_optimisticMediaUploadItemForMessageIdentifier;
    WAMediaDownloadPolicy *_shareExtensionDownloadPolicy;
}

+ (long long)wamEndStateForEndState:(unsigned long long)arg1;
+ (_Bool)optimisticUploadsAvailable;
- (void).cxx_destruct;
- (void)submitFieldstatsForItem:(id)arg1 endState:(long long)arg2;
- (id)optimisticMediaUploadItemForMessageIdentifier;
- (id)optimisticMediaUploadItemForIdentifier;
- (id)optimisticMediaUploadStateManager;
- (id)mediaUploader;
- (void)clearForItem:(id)arg1 valid:(_Bool)arg2;
- (void)clearForItem:(id)arg1 uploadEvent:(id)arg2 uploadEvent2:(id)arg3;
- (void)finishForItem:(id)arg1 messageIdentifier:(id)arg2 resultUsed:(_Bool)arg3 uploadEvent:(id)arg4 uploadEvent2:(id)arg5;
- (void)finishForMessageIdentifier:(id)arg1 resultUsed:(_Bool)arg2 uploadEvent:(id)arg3 uploadEvent2:(id)arg4;
- (void)finishForMessageIdentifier:(id)arg1 resultUsed:(_Bool)arg2;
- (void)stopAllOptimisticUploads;
- (void)stopOptimisticUploadForMessageIdentifier:(id)arg1;
- (id)existCheckOperationForMessageIdentifier:(id)arg1;
- (id)uploadOperationForMessageIdentifier:(id)arg1;
- (id)resultForMessageIdentifier:(id)arg1;
- (void)uploadExistCheckFailedForItemWithIdentifier:(id)arg1 result:(unsigned long long)arg2 error:(id)arg3 uploadEvent:(id)arg4 uploadEvent2:(id)arg5;
- (void)uploadFailedForItemWithIdentifier:(id)arg1 error:(id)arg2 uploadEvent:(id)arg3 uploadEvent2:(id)arg4;
- (void)uploadSucceededForItemWithIdentifier:(id)arg1 withResult:(id)arg2 uploadEvent:(id)arg3 uploadEvent2:(id)arg4;
- (void)discardOptimisticMediaUploadItemIfNeededWithIdentifier:(id)arg1 newSize:(unsigned long long)arg2;
- (void)associateOptimisticMediaUploadItemWithIdentifier:(id)arg1 withMessageIdentifier:(id)arg2;
- (void)stopOptimisticMediaUploadForItemWithIdentifier:(id)arg1;
- (void)startOptimisticUploadAfterRemainingDelayForItem:(id)arg1 itemURL:(id)arg2 mimeType:(id)arg3;
- (void)startOptimisticExistCheckForPreparedItem:(id)arg1 itemURL:(id)arg2 mimeType:(id)arg3;
- (void)startOptimisticMediaUploadForPreparedItem:(id)arg1 itemURL:(id)arg2 mimeType:(id)arg3;
- (void)startOptimisticMediaUploadForItem:(id)arg1;
- (void)stopMonitoringMediaItem:(id)arg1;
- (void)mediaItemDidUpdatePaintCanvasContent:(id)arg1;
- (void)mediaItemDidUpdatePreviewContent:(id)arg1;
- (void)stopOptimisticMediaUploadForMediaItem:(id)arg1 reason:(unsigned long long)arg2;
- (void)startOptimisticMediaUploadForMediaItem:(id)arg1 quality:(id)arg2 mediaPickerOrigin:(unsigned long long)arg3;
- (_Bool)cellularAllowedForOptimisticUploads;
- (void)dealloc;
- (id)initWithMediaUploader:(id)arg1;
- (void)stopPendingOptimisticUploads;
- (void)finishForMessage:(id)arg1 resultUsed:(_Bool)arg2 uploadEvent:(id)arg3 uploadEvent2:(id)arg4;
- (void)finishForMessage:(id)arg1 resultUsed:(_Bool)arg2;
- (void)stopOptimisticUploadForMessage:(id)arg1;
- (id)uploadOperationForMessage:(id)arg1;
- (id)resultForMessage:(id)arg1;
- (id)templateMessageForMessages:(id)arg1;
- (void)startOptimisticMediaUploadForMessages:(id)arg1;
- (void)associateOptimisticMediaUploadItemWithIdentifier:(id)arg1 withMessage:(id)arg2;

@end
