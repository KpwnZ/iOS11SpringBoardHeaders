//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMWakeGestureDelegate-Protocol.h"

@class CMWakeGestureManager, NSHashTable, NSString, SBIdleTimerDefaults;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate>
{
    CMWakeGestureManager *_wakeGestureManager;
    long long _wakeGestureState;
    NSHashTable *_observers;
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _screenOn;
    _Bool _isEnabled;
    _Bool _observingCMWakeGestureManager;
}

+ (id)sharedController;
@property(retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_isEnabled;
- (void).cxx_destruct;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)_sendTransitionToObservers:(long long)arg1;
- (void)_stopObservingIfNecessary;
- (void)_startObservingIfNecessary;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (void)_reconsiderEnablement;
- (_Bool)_isObservingWakeGestureManager;
- (void)_screenTurnedOn;
- (void)_screenTurnedOff;
- (void)_ignoredTransition:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

