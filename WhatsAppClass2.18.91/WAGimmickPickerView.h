//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WAGIFPickerManagerDelegate-Protocol.h"
#import "WAStickerPickerManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UICollectionView, UIImageView, WAGIFPickerManager, WAStickerPickerManager;
@protocol WAGimmickPickerViewConfiguring><UICollectionViewDelegate><UICollectionViewDataSource, WAGimmickPickerViewDelegate;

__attribute__((visibility("hidden")))
@interface WAGimmickPickerView : UIView <WAStickerPickerManagerDelegate, WAGIFPickerManagerDelegate, UIScrollViewDelegate>
{
    WAStickerPickerManager *_stickerManager;
    WAGIFPickerManager *_GIFManager;
    unsigned long long _mode;
    struct CGPoint _previousContentOffset;
    _Bool _hasStartedDraggingContent;
    _Bool _isAnimatingButtonContainer;
    double _previousButtonContainerOffset;
    double _buttonContainerOffset;
    id <WAGimmickPickerViewConfiguring><UICollectionViewDelegate><UICollectionViewDataSource> _manager;
    NSMutableDictionary *_contentCollectionViewMap;
    NSMutableDictionary *_contentOffsetMap;
    id <WAGimmickPickerViewDelegate> _delegate;
    UICollectionView *_pagingCollectionView;
    UICollectionView *_categoryCollectionView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_buttonContainerView;
    UIButton *_stickerButton;
    UIButton *_GIFButton;
    UIImageView *_rightButtonUpdateIndicatorView;
}

@property(nonatomic) __weak UIImageView *rightButtonUpdateIndicatorView; // @synthesize rightButtonUpdateIndicatorView=_rightButtonUpdateIndicatorView;
@property(nonatomic) __weak UIButton *GIFButton; // @synthesize GIFButton=_GIFButton;
@property(nonatomic) __weak UIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(nonatomic) __weak UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(nonatomic) __weak UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak UICollectionView *categoryCollectionView; // @synthesize categoryCollectionView=_categoryCollectionView;
@property(nonatomic) __weak UICollectionView *pagingCollectionView; // @synthesize pagingCollectionView=_pagingCollectionView;
@property(nonatomic) __weak id <WAGimmickPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerButtonTapped;
- (void)GIFButtonTapped;
- (void)rightButtonTapped;
- (void)leftButtonTapped;
- (void)resetButtonContainer;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gifPickerManager:(id)arg1 didChangeCategory:(id)arg2;
- (void)gifPickerManager:(id)arg1 didSelectGIF:(id)arg2;
- (void)didUpdateBackgroundViewInStickerPickerManager:(id)arg1;
- (void)didUpdateCategoriesInStickerPickerManager:(id)arg1;
- (void)stickerPickerManager:(id)arg1 didChangeCategory:(id)arg2;
- (void)stickerPickerManager:(id)arg1 didSelectManagedSticker:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 category:(id)arg2 manager:(id)arg3;
- (struct CGPoint)contentOffsetForCategory:(id)arg1 manager:(id)arg2;
- (void)updateCategoryContentOffsetIfNeccessaryForCategory:(id)arg1;
- (void)updateBackgroundViewForCollectionView:(id)arg1 manager:(id)arg2 category:(id)arg3;
- (void)configureCollectionView:(id)arg1 manager:(id)arg2 category:(id)arg3;
- (void)showStickerStarredCategory;
- (void)setStickerCategoryForStickerPack:(id)arg1;
- (void)setDefaultGIFCategory;
- (void)setButtonContainerOffset:(double)arg1;
- (void)longPressContentCollectionView:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (double)buttonContainerViewHeight;
- (double)extraBottomInset;
- (void)didMoveToSuperview;
- (void)configureViewsWithManager:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
