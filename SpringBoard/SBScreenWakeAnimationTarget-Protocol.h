//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFLockScreenDateView, UIView;

@protocol SBScreenWakeAnimationTarget <NSObject>
- (void)updateWakeEffectsForWake:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)updateWakeEffectsForWake:(_Bool)arg1;
- (SBFLockScreenDateView *)dateView;
- (UIView *)superviewForDateViewAnimation;
@end

