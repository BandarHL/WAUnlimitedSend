//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WAInteractiveAnnotationView, WAPBInteractiveAnnotation, WAStatusViewerSectionView;

@protocol WAStatusViewerSectionViewDelegate <NSObject>
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didSelectInteractiveAnnotation:(WAPBInteractiveAnnotation *)arg2 inInteractiveAnnotationView:(WAInteractiveAnnotationView *)arg3;
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didRequestOpenGroupLink:(NSURL *)arg2;
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didRequestAudioVolumeChange:(float)arg2;
- (void)statusViewerSectionViewDidEndShowingLinkPreview:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginShowingLinkPreview:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionDidEndLoading:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionDidBeginLoading:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestMoreOptions:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestDownload:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidEndZoomPan:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginZoomPan:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidEndPreventingAdvancing:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginPreventingAdvancing:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidEndUserInteraction:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginUserInteraction:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestDismiss:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidFinishPresentingItem:(WAStatusViewerSectionView *)arg1;
- (_Bool)canStatusViewerSectionViewRequestAdvanceToNextMessage:(WAStatusViewerSectionView *)arg1;
@end
