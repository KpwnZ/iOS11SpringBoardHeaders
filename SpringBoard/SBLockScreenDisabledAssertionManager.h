//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAutoUnlockRule-Protocol.h"

@class NSMutableSet, NSString;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule>
{
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

- (void).cxx_destruct;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (_Bool)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

