//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDate, NSString, UIDynamicAnimator, UIDynamicItemBehavior, UIFieldBehavior, UIPanGestureRecognizer, UISnapBehavior, UITapGestureRecognizer, UIView;
@protocol WACallOverlayTouchControllerDelegate;

__attribute__((visibility("hidden")))
@interface WACallOverlayTouchController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _positionValid;
    NSDate *_lastDragTime;
    struct CGPoint _initialDragPosition;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_dragRecognizer;
    UIDynamicAnimator *_animator;
    UISnapBehavior *_snapBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    UIFieldBehavior *_fieldBehavior;
    _Bool _enabled;
    id <WACallOverlayTouchControllerDelegate> _delegate;
    UIView *_overlayView;
    struct CGRect _layoutBounds;
}

@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <WACallOverlayTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGPoint)adjustOverlayViewCenter:(struct CGPoint)arg1 overlayViewSize:(struct CGSize)arg2 toStayWithinBounds:(struct CGRect)arg3;
- (struct CGPoint)adjustOverlayViewCenter:(struct CGPoint)arg1 fromOverlayViewSize:(struct CGSize)arg2 toOverlayViewSize:(struct CGSize)arg3 fromOverallBounds:(struct CGRect)arg4 toOverallBounds:(struct CGRect)arg5;
- (struct CGPoint)defaultOverlayPosition;
- (void)viewDragged:(id)arg1;
- (_Bool)isDragging;
- (void)viewTapped;
- (void)addSnapBehaviorForPosition:(struct CGPoint)arg1;
- (void)addFieldBehaviorForPosition:(struct CGPoint)arg1;
- (void)addDynamicItemBehaviorWithVelocity:(struct CGPoint)arg1;
- (void)configureDynamicAnimator;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
