//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject
{
    SBAppSwitcherRemoteAlertSet *_remoteAlerts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)currentRemoteAlerts;
- (void)removeRemoteAlert:(id)arg1;
- (void)addRemoteAlert:(id)arg1;

@end
