//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Additions)
+ (id)wa_primaryLanguage;
@property(nonatomic) _Bool wa_ignoresInvertColors;
- (void)wa_resignFirstResponder;
- (void)wa_perform3DTouchCommitAnimation;
- (void)wa_disableRTL;
@property(readonly, nonatomic) struct UIEdgeInsets wa_layoutMargins;
- (id)wa_constrainToSuperviewCenterY;
- (id)wa_constrainToSuperviewCenterYWithInset:(double)arg1;
- (id)wa_constrainToSuperviewCenterX;
- (void)wa_constrainToSuperviewHorizontalEdges;
- (void)wa_constrainToSuperviewHorizontalEdgesWithInset:(double)arg1;
- (id)wa_constrainToSuperviewCenterXWithInset:(double)arg1;
- (id)wa_constrainToSuperviewTrailingEdge;
- (id)wa_constrainToSuperviewTrailingEdgeWithInset:(double)arg1;
- (id)wa_constrainToSuperviewTrailingEdgeWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_constrainToSuperviewWithSafeAreaLayoutGuideIfPossibleOnEdge:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)wa_constrainToSuperviewBottomEdgeRespectingSafeAreaInsets;
- (id)wa_constrainToSuperviewTopEdgeRespectingSafeAreaInsets;
- (id)wa_constrainToSuperviewTrailingEdgeRespectingSafeAreaInsetsWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_constrainToSuperviewTrailingEdgeRespectingSafeAreaInsets;
- (id)wa_constrainToSuperviewLeadingEdgeRespectingSafeAreaInsetsWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_constrainToSuperviewLeadingEdgeRespectingSafeAreaInsets;
- (id)wa_constrainToSuperviewLeadingEdge;
- (id)wa_constrainToSuperviewLeadingEdgeWithInset:(double)arg1;
- (id)wa_constrainToSuperviewEdge:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)wa_constrainToSuperviewLeadingEdgeWithBlock:(CDUnknownBlockType)arg1;
- (void)wa_constrainToSuperviewVerticalEdges;
- (void)wa_constrainToSuperviewVerticalEdgesWithInset:(double)arg1;
- (id)wa_constrainToSuperviewBottomEdge;
- (id)wa_constrainToSuperviewBottomEdgeWithInset:(double)arg1;
- (id)wa_constrainToSuperviewBottomEdgeWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_constrainToSuperviewTopEdge;
- (id)wa_constrainToSuperviewTopEdgeWithInset:(double)arg1;
- (id)wa_constrainToSuperviewTopEdgeWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_constrainToHeight:(double)arg1;
- (id)wa_constrainToWidth:(double)arg1;
- (id)wa_snapshotViewByRenderingIntoBitmapContext;
@property(readonly, nonatomic) UIView *wa_earliestAncestorView;
- (void)wa_enumerateViewHierarchy:(CDUnknownBlockType)arg1;
- (id)firstSubviewOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool wa_hasPausedParentView;
@property(readonly, nonatomic) _Bool wa_isLayoutDirectionRightToLeft;
- (struct UIEdgeInsets)wa_safeAreaInsets;
- (void)wa_snapToPixelOrigin;
- (struct CGPoint)wa_alignedCenterFromCenter:(struct CGPoint)arg1 flippedForRTL:(_Bool)arg2;
- (struct CGPoint)wa_alignedCenterFromCenter:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint wa_origin;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double wa_bottom;
@property(nonatomic) double wa_right;
@property(nonatomic) double wa_top;
@property(nonatomic) double wa_left;
@end
