//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFolderController, SBIconController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBIconControllerFolderPresentationObserver <NSObject>
- (void)iconController:(SBIconController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
@end

