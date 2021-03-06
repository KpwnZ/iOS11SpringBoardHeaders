//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUSSDAlert.h"

#import "SBSMSClass0AlertDisplayDelegate-Protocol.h"

@class NSString;

@interface SBSMSClass0Alert : SBUSSDAlert <SBSMSClass0AlertDisplayDelegate>
{
}

+ (void)alertWithString:(id)arg1 address:(id)arg2;
+ (void)playMessageReceived;
+ (void)registerForAlerts;
- (void)smsClass0AlertDisplayDidTapLearnMoreButton:(id)arg1;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)deactivate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)_initWithString:(id)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

