//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBSOSLockGestureObserver;

@protocol SBSOSLockGestureObserverDelegate <NSObject>
- (void)sosLockDidTriggerSOS:(SBSOSLockGestureObserver *)arg1 completion:(void (^)(_Bool))arg2;

@optional
- (void)sosLockTriggerDidBecomeInactive:(SBSOSLockGestureObserver *)arg1;
- (void)sosLockTriggerDidBecomeActive:(SBSOSLockGestureObserver *)arg1;
@end

