//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatNavigationController.h"

#import "WARestorable-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WASettingsNavigationController : WAChatNavigationController <WARestorable>
{
}

- (void)encodeWARestorableStateWithCoder:(id)arg1;
- (void)didRestoreWithCoder:(id)arg1 children:(id)arg2;
- (id)init;
- (void)reloadViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
