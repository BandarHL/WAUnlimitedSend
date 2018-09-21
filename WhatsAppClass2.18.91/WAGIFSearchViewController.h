//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, UIScrollView, UISearchBar, UIView, WAGIFAsset, WAGIFAssetCollection, WAGIFSearch, WALoopingVideoPlayerView;
@protocol WAGIFSearchViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAGIFSearchViewController : WAViewController <UISearchBarDelegate, UIScrollViewDelegate, WANavigationControllerPopToAnimating>
{
    UICollectionView *_collectionView;
    UISearchBar *_searchBar;
    UIView *_mainView;
    UIView *_backGroundView;
    UIScrollView *_draggingScrollView;
    WAGIFSearch *_search;
    WAGIFAssetCollection *_GIFs;
    WAGIFAssetCollection *_presetGIFs;
    _Bool _firstGIFPresented;
    UIView *_noResultsView;
    WALoopingVideoPlayerView *_noResultsPlayer;
    NSIndexPath *_selectedIndexPath;
    WAGIFAsset *_selectedGIF;
    id <WAGIFSearchViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAGIFSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)presentGIFs:(id)arg1;
- (void)setNoResultsPlayerPaused:(_Bool)arg1;
- (id)collectionViewLayoutForCollectionView;
- (void)searchQueryWithText:(id)arg1;
- (void)dismiss;
- (void)actionButton;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
