//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WALayerAnimationDelegate : NSObject
{
    CDUnknownBlockType _onStart;
    CDUnknownBlockType _onStop;
}

+ (id)animationDelegateWithOnStop:(CDUnknownBlockType)arg1;
+ (id)animationDelegateWithOnStart:(CDUnknownBlockType)arg1 onStop:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType onStop; // @synthesize onStop=_onStop;
@property(copy, nonatomic) CDUnknownBlockType onStart; // @synthesize onStart=_onStart;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
