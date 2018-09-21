//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCapturePhotoCaptureDelegate-Protocol.h"

@class NSString, WACameraController;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WACameraStillPhotoRequest : NSObject <AVCapturePhotoCaptureDelegate>
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSString *_pathToFullImage;
    _Bool _isExecuting;
    _Bool _isMediaConsumed;
    long long _videoOrientation;
    _Bool _isMirrored;
    long long _flashMode;
    WACameraController *_cameraController;
    CDUnknownBlockType _shutterFiredBlock;
}

+ (_Bool)resetPendingPhotoCaptureRequests;
+ (_Bool)hasPendingPhotoCaptureRequests;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)fetchResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didFinishPhotoCaptureWithPathToFullImage:(id)arg1;
- (void)processPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)legacyCapturePhotoFromOutput:(id)arg1;
- (void)capturePhotoFromOutput:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)executeWithShutterFiredBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCameraController:(id)arg1 videoOrientation:(long long)arg2 mirrored:(_Bool)arg3 flashMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
