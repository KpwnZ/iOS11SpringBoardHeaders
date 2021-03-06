//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBIdleTimerDefaults;

@interface SBBacklightController : NSObject
{
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _isPendingScreenUnblankAfterCACommit;
    long long _lastBacklightChangeSource;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
@property(readonly, nonatomic) long long lastBacklightChangeSource; // @synthesize lastBacklightChangeSource=_lastBacklightChangeSource;
@property(readonly, nonatomic) _Bool isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
- (void).cxx_destruct;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (double)defaultLockScreenDimInterval;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)reloadDefaults;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;
- (_Bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (void)setBacklightFactorPending:(float)arg1;
@property(readonly, nonatomic) _Bool screenIsDim;
@property(readonly, nonatomic) _Bool screenIsOn;
- (void)_deferredScreenUnblankDone;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
@property(readonly, nonatomic) double backlightFactor;
- (void)_undimFromSource:(long long)arg1;
- (id)init;

@end

