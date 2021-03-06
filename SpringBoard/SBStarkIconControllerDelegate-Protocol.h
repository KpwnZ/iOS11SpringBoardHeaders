//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBStarkIconController, SBWindow;

@protocol SBStarkIconControllerDelegate <NSObject>
- (void)iconModelDidLoad;
- (void)iconModelDidLayout;
- (void)handleBackPress;
- (SBWindow *)animationWindowForIconController:(SBStarkIconController *)arg1;

@optional
- (_Bool)iconControllerShouldPersistIconsForFakeApps:(SBStarkIconController *)arg1;
@end

