//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol WAPagingScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WAPagingScrollView : UIScrollView
{
    long long _hideTouchesFromSubviewsCounter;
}

- (void)endHidingTouchesFromSubviews;
- (void)beginHidingTouchesFromSubviews;
- (_Bool)isHidingTouchesFromSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WAPagingScrollViewDelegate> delegate; // @dynamic delegate;

@end
