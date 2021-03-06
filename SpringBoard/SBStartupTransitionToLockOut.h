//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBBaseStartupTransition.h"

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}

@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void).cxx_destruct;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;

@end

