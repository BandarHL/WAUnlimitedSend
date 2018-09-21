//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSIndexSet, WAChatCellData, WAChatMessagesController, WAMessage;

@protocol WAChatMessagesControllerDelegate <NSObject>
- (unsigned long long)bottomPanelModeForController:(WAChatMessagesController *)arg1;
- (void)controller:(WAChatMessagesController *)arg1 needsConfigureInsertedChatCellData:(WAChatCellData *)arg2;
- (_Bool)controller:(WAChatMessagesController *)arg1 shouldRemoveMessage:(WAMessage *)arg2;
- (void)controllerDidRequestRebuildAllSections:(WAChatMessagesController *)arg1;
- (void)controllerDidChangeContent:(WAChatMessagesController *)arg1;
- (void)controller:(WAChatMessagesController *)arg1 didInsertIndexPaths:(NSArray *)arg2;
- (void)controller:(WAChatMessagesController *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)controller:(WAChatMessagesController *)arg1 didReloadIndexPaths:(NSArray *)arg2;
- (void)controller:(WAChatMessagesController *)arg1 didRemoveSections:(NSIndexSet *)arg2;
- (void)controller:(WAChatMessagesController *)arg1 didRemoveIndexPaths:(NSArray *)arg2;
- (void)controller:(WAChatMessagesController *)arg1 didUpdateGroupingStateForMessageAtIndexPath:(NSIndexPath *)arg2;
- (void)controllerWillChangeContent:(WAChatMessagesController *)arg1 animated:(_Bool)arg2;
@end
