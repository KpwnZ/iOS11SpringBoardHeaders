//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSceneLayoutSlaveTransactionProviding-Protocol.h"

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableArray, NSString, SBMainDisplaySceneManager, SBMainWorkspace;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding>
{
    SBMainWorkspace *_mainWorkspace;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayIdentity *_identity;
    FBSDisplayConfiguration *_currentConfiguration;
    _Bool _observingAppState;
    _Bool _hasConnectTransactionRun;
    _Bool _disconnected;
    _Bool _tornDown;
    NSMutableArray *_pendingWork;
}

@property(readonly, nonatomic) FBSDisplayConfiguration *currentDisplayConfiguration; // @synthesize currentDisplayConfiguration=_currentConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_identity;
- (void).cxx_destruct;
- (void)_handleDisplayConnectIfPossible;
- (void)_appProcessStateDidChange:(id)arg1;
- (void)_runUpdateWithLabel:(id)arg1 transactionClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;
- (_Bool)_shouldConnectDisplayNow:(id)arg1;
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;
- (id)slaveTransactionsForTransitionRequest:(id)arg1;
- (id)expectedForegroundApps;
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithConfiguration:(id)arg1;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (void)dealloc;
- (id)initWithMainWorkspace:(id)arg1 mainDisplaySceneManager:(id)arg2 displayIdentity:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

