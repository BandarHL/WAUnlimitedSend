//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class NSURL, SFSafariViewController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WASafariPreviewController : WAViewController
{
    UIView *_headerView;
    UILabel *_titleLabel;
    SFSafariViewController *_safariViewController;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)wa_previewActionItems;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithURL:(id)arg1;

@end
