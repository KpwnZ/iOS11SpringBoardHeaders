//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAuthenticationFeedback, SBLockScreenUnlockRequest;
@protocol SBBiometricUnlockBehavior;

@protocol SBBiometricUnlockBehaviorDelegate <NSObject>
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsUnlock:(SBLockScreenUnlockRequest *)arg2 withFeedback:(SBAuthenticationFeedback *)arg3;
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsFeedback:(SBAuthenticationFeedback *)arg2;
@end
