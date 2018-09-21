//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAPaintCanvasDelegate-Protocol.h"
#import "WAPaintCanvasTextItemViewDelegate-Protocol.h"

@class CADisplayLink, CAMetalLayer, NSString, UIColor, WAPaintCanvas, WAPaintCanvasTextItem, WAPaintCanvasToolTipView, WAPaintCanvasViewAnimator;
@protocol WAPaintCanvasViewDelegate;

__attribute__((visibility("hidden")))
@interface WAPaintCanvasView : UIView <WAPaintCanvasDelegate, WAPaintCanvasTextItemViewDelegate>
{
    CADisplayLink *_displayLink;
    struct CGSize _lastSize;
    long long _countOfTrackedTouches;
    _Bool _isTouchSequenceEligibleForSingleTap;
    id _currentPinchInfo;
    // Error parsing type: , name: _activeStrokeBrushSize
    UIView *_tooltipContainerView;
    WAPaintCanvasToolTipView *_toolTipView;
    UIView *_textItemContainerView;
    WAPaintCanvasTextItem *_editingTextItem;
    WAPaintCanvasTextItem *_editingTextItemCopy;
    WAPaintCanvasViewAnimator *_animator;
    _Bool _hasActiveStroke;
    float _brushSize;
    id <WAPaintCanvasViewDelegate> _delegate;
    WAPaintCanvas *_canvas;
    UIColor *_brushColor;
    struct UIEdgeInsets _extendedEdgeInsets;
}

+ (Class)layerClass;
@property(readonly, nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property(readonly, nonatomic) _Bool hasActiveStroke; // @synthesize hasActiveStroke=_hasActiveStroke;
@property(nonatomic) float brushSize; // @synthesize brushSize=_brushSize;
@property(retain, nonatomic) UIColor *brushColor; // @synthesize brushColor=_brushColor;
@property(retain, nonatomic) WAPaintCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) __weak id <WAPaintCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moveTooltipWithSample:(id)arg1;
- (void)removeTooltip;
- (double)effectiveZoomScale;
- (void)addToolTipToSample:(id)arg1;
- (void)addNewBrushItemAtPosition:(_Bool)arg1 withToolTip:(double)arg2 minimumHeight: /* Error: Ran out of types for this method. */;
- (void)addNewBrushItemAtHeightFraction:(double)arg1 withToolTip:(_Bool)arg2 minimumHeight:(double)arg3;
- (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (void)cycleContentStampTextureOfRenderer:(id)arg1;
- (void)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldAllowTapAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldAllowBeginPanAtPoint:(struct CGPoint)arg1;
- (_Bool)isCurrentBrushTypeStrokeable;
- (_Bool)checkIfPointsArePinchableP0:(struct CGPoint)arg1 p1:(struct CGPoint)arg2;
@property(readonly, nonatomic, getter=isTrackingPinch) _Bool trackingPinch;
- (void)endCurrentPinch;
- (void)cleanUpPendingTouchSequence;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBeginTrackingTouches;
- (void)endEditingTextItem;
- (void)beginEditingTextItem:(id)arg1;
- (void)beginEditingFirstTextItem;
-     // Error parsing type: {?=[3]}24@0:8@16, name: canvasSpaceToCropSpaceTransformForItemView:
- (CDStruct_6b9f5eac)canvasTransformInfoForItemView:(id)arg1;
- (void)addNewTextItemAtPosition: /* Error: Ran out of types for this method. */;
- (_Bool)isRenderingDegraded;
- (id)textItemViewForTextItem:(id)arg1;
- (void)updateAllTextItems;
- (float)currentEffectValue;
- (struct CGSize)brushSizeWithScaleFactor:(double)arg1 aspectRatio:(struct CGSize)arg2 minimumHeight:(double)arg3;
-     // Error parsing type: 24@0:8d16, name: referenceBrushSizeWithMinimumHeight:
- (id)transformProvidingView;
-     // Error parsing type: 32@0:8{CGPoint=dd}16, name: positionFromPoint:
- (void)setBrushType:(long long)arg1 brushContent:(id)arg2;
@property(readonly, nonatomic) long long brushType;
- (void)applyTextStyle:(id)arg1;
- (void)update:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)paintCanvas:(id)arg1 didUpdateSampleForPinch:(id)arg2;
- (void)paintCanvas:(id)arg1 didDeleteItemAtCropSpacePosition: /* Error: Ran out of types for this method. */;
- (void)paintCanvas:(id)arg1 shouldEnterPendingDeletionState:(_Bool)arg2;
- (_Bool)paintCanvas:(id)arg1 shouldDeleteItemAtCropSpacePosition: /* Error: Ran out of types for this method. */;
- (void)paintCanvasDidUpdateTextItems:(id)arg1;
- (void)paintCanvasDidChangeViewport:(id)arg1;
- (id)drawableForPaintCanvas:(id)arg1;
- (struct CGSize)drawableSizeForPaintCanvas:(id)arg1;
- (void)clear;
- (struct CGSize)layerSizeFromViewSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CAMetalLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end
