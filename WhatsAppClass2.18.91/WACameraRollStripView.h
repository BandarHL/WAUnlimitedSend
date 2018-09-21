//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_WACameraRollStripScrollViewDelegate-Protocol.h"

@class NSString, UIColor, WAAssetCollection, _WACameraRollStripScrollView;
@protocol WACameraRollStripViewDelegate;

__attribute__((visibility("hidden")))
@interface WACameraRollStripView : UIView <_WACameraRollStripScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _WACameraRollStripScrollView *_scrollView;
    _Bool _userInteractionReported;
    WAAssetCollection *_assetCollection;
    id <WACameraRollStripViewDelegate> _delegate;
    double _imageRotationAngle;
}

+ (double)preferredThumbnailWidth;
+ (double)preferredHeight;
@property(nonatomic) double imageRotationAngle; // @synthesize imageRotationAngle=_imageRotationAngle;
@property(nonatomic) __weak id <WACameraRollStripViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (void)cameraRollStripScrollView:(id)arg1 didLongPressItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollViewDidReceiveTouch:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cameraRollStripScrollView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (void)cameraRollStripScrollView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInCameraRollStripScrollView:(id)arg1;
- (id)previewingSourceView;
- (id)assetForLocation:(struct CGPoint)arg1;
- (id)assetForForceTouchLocation:(struct CGPoint)arg1;
- (id)viewForVisibleMediaPickerAssetWithIdentifier:(id)arg1;
- (id)viewForMediaPickerAsset:(id)arg1;
- (void)setPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setPresentationState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long presentationState;
- (void)reportUserInteractionIfNeeded;
- (void)contractIfPossible;
- (void)expandIfPossible;
- (void)reloadData;
@property(retain, nonatomic) UIColor *baseColor;
@property(nonatomic) double thumbnailAlpha;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
