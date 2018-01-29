//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayObserving-Protocol.h"
#import "SBStarkScreenControllerDelegate-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString, SBFAuthenticationAssertion, SBLockScreenDisableAssertion, SBSStatusBarStyleOverridesAssertion, SBSpuriousScreenUndimmingAssertion, SBStarkScreenController;

@interface SBStarkScreenManager : NSObject <FBSDisplayObserving, SBStarkScreenControllerDelegate>
{
    NSMutableDictionary *_displayIdentityToControllerMap;
    SBStarkScreenController *_currentScreenController;
    NSHashTable *_observers;
    SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
    SBFAuthenticationAssertion *_deviceLockDisableAssertion;
    SBLockScreenDisableAssertion *_lockScreenDisableAssertion;
    SBFAuthenticationAssertion *_earlyConnectDeviceLockDisableAssertion;
    SBSStatusBarStyleOverridesAssertion *_carPlayStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_earlyCarPlayStatusBarStyleOverrideAssertion;
    _Bool _hasShownConnectedAlert;
    _Bool _delayShowingConnectedAlert;
    _Bool _geoSupported;
    _Bool _earlyStarkConnection;
    _Bool _delayUpdatingLockOutMode;
}

+ (_Bool)starkScreenIsAttached;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)starkScreenControllerWantsRelockUI:(id)arg1;
- (_Bool)starkScreenControllerShouldDelayUpdateLockoutMode:(id)arg1;
- (void)_promptConnectionSteps;
- (void)_clearPromptState;
- (void)_clearEarlyConnectState;
- (void)_clearEarlyConnectStateTimerExpired;
- (void)_unscheduleClearEarlyConnectStateExpirationTimer;
- (void)_scheduleClearEarlyConnectStateExpirationTimer;
- (void)_earlyStarkConnection;
- (void)_pairedVehiclesChanged:(id)arg1;
- (void)_usbStarkConnected;
- (void)_setCurrentController:(id)arg1;
- (void)_updateGeoSupport;
- (_Bool)shouldShowCarPlayStatusBarItem;
- (_Bool)promptRelockUIIfAppropriate;
- (_Bool)handleUnlockAttempt;
- (void)prepareToHandleUnlockAttempt;
- (_Bool)isGeoSupported;
- (_Bool)isStarkActive;
- (id)activeScreenController;
- (_Bool)starkScreenIsAttached;
- (id)currentScreenController;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
