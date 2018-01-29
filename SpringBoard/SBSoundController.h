//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface SBSoundController : NSObject
{
    NSMutableDictionary *_soundsBySystemSoundIDs;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_enqueueCallback:(CDUnknownBlockType)arg1;
- (void)_endPendingCallbacksBlock;
- (void)_beginPendingCallbacksBlock;
- (void)_soundDidFinishPlaying:(id)arg1;
- (void)_soundDidStartPlaying:(id)arg1;
- (void)_ringerStateChanged:(id)arg1;
- (_Bool)_playFeedback:(id)arg1;
- (_Bool)_playToneAlert:(id)arg1;
- (_Bool)_playSystemSound:(id)arg1;
- (void)_cleanupToneAlertForSound:(id)arg1 andKill:(_Bool)arg2;
- (void)_cleanupSystemSound:(unsigned int)arg1 andKill:(_Bool)arg2;
- (_Bool)handleVolumeButtonDownEvent;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)stopAllSounds;
- (_Bool)stopSound:(id)arg1;
- (_Bool)playSound:(id)arg1 environments:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)playSoundWithDefaultEnvironment:(id)arg1;
- (_Bool)isPlaying:(id)arg1;
- (_Bool)isPlayingAnySound;
- (id)init;

@end
