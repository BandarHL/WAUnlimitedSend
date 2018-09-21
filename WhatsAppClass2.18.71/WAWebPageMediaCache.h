//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WAWebPageMediaCache : NSObject
{
    NSMutableDictionary *_webURLToMediaFileURL;
    NSCache *_webURLToImagePreview;
}

+ (id)duplicateMP4MediaFileURL:(id)arg1;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)imagePreviewForWebURL:(id)arg1;
- (void)setImagePreview:(id)arg1 forWebURL:(id)arg2;
- (id)mediaFileURLForWebURL:(id)arg1;
- (void)setMediaFileURL:(id)arg1 forWebURL:(id)arg2;
- (id)init;

@end
