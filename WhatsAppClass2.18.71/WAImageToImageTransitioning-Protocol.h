//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, UIViewController, WAImageToImageTransitionView;

@protocol WAImageToImageTransitioning <NSObject>
- (void)finishTransitionWithContext:(NSMutableDictionary *)arg1;
- (WAImageToImageTransitionView *)viewForTransitionAnimationWithContext:(NSMutableDictionary *)arg1;
- (void)prepareForTransitionWithContext:(NSMutableDictionary *)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3 context:(NSMutableDictionary *)arg4;
@end
