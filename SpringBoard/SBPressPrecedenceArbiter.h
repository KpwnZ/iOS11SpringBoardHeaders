//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject
{
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    _Bool _isMusicPlayingSomewhere;
    NSArray *_hardwareButtons;
}

@property(retain, nonatomic) NSArray *hardwareButtons; // @synthesize hardwareButtons=_hardwareButtons;
- (void).cxx_destruct;
- (unsigned long long)_currentButtonPriority;
- (void)_applyButtonPriority:(unsigned long long)arg1;
- (void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1;
- (void)_updateButtonPrioritiesForNotification:(id)arg1;
- (void)_updateButtonPriority;
- (void)_initializeButtonPriorities;
- (_Bool)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (id)initWithHomeButtonType:(long long)arg1;

@end

