//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

@class FBUIApplicationSceneDeactivationAssertion, SBFloatingApplicationRootViewController, SBMainDisplayLayoutState, SBMainWorkspaceApplicationSceneLayoutElementViewController, SBMainWorkspaceTransaction, SBPanSystemGestureRecognizer;

@interface SBPinFloatingApplicationPanSystemGestureRecognizerWorkspaceTransaction : SBSystemGestureWorkspaceTransaction
{
    SBMainDisplayLayoutState *_initialLayoutState;
    long long _initialInterfaceOrientation;
    long long _initialSpaceConfiguration;
    long long _initialFloatingConfiguration;
    long long _panDirection;
    long long _completionAction;
    SBMainWorkspaceApplicationSceneLayoutElementViewController *_primaryLayoutElementViewController;
    SBMainWorkspaceApplicationSceneLayoutElementViewController *_sideLayoutElementViewController;
    FBUIApplicationSceneDeactivationAssertion *_applicationSceneDeactivationAssertion;
    SBMainWorkspaceTransaction *_layoutStateTransitionWorkspaceTransaction;
    SBFloatingApplicationRootViewController *_floatingApplicationRootViewController;
    SBPanSystemGestureRecognizer *_panSystemGestureRecognizer;
}

+ (double)prototypeSettingsPinPanUpGestureRubberbandCoefficient;
+ (double)prototypeSettingsPinPanUpGestureThresholdPercentage;
+ (double)prototypeSettingsPinPanUpGestureTravelDistance;
+ (double)prototypeSettingsPinUnpinPanGestureMaximumScale;
+ (double)prototypeSettingsPinUnpinPanGestureThresholdPercentage;
+ (double)prototypeSettingsPinUnpinPanGestureTravelDistance;
+ (double)prototypeSettingsInteractiveAnimationSpringFriction;
+ (double)prototypeSettingsInteractiveAnimationSpringTension;
+ (double)prototypeSettingsAnimationSpringFriction;
+ (double)prototypeSettingsAnimationSpringTension;
+ (double)prototypeSettingsGestureRubberbandCoefficient;
+ (double)prototypeSettingsBlurFadeAnimationDuration;
+ (double)prototypeSettingsFullScreenEdgeInset;
+ (double)prototypeSettingsCornerRadius;
@property(readonly, nonatomic) SBPanSystemGestureRecognizer *panSystemGestureRecognizer; // @synthesize panSystemGestureRecognizer=_panSystemGestureRecognizer;
@property(readonly, nonatomic) __weak SBFloatingApplicationRootViewController *floatingApplicationRootViewController; // @synthesize floatingApplicationRootViewController=_floatingApplicationRootViewController;
- (void).cxx_destruct;
- (id)_sceneLayoutViewController;
- (void)_captureLayoutElementViewControllers;
- (void)_captureCompletionAction;
- (void)_capturePanDirection;
- (void)_updateUserInterfaceAfterLayoutStateTransitionWithTransactionCompletion:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUserInterfaceBeforeLayoutStateTransitionWithTransactionCompletion:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUserInterfaceWithTranslation:(double)arg1 velocity:(double)arg2 systemGestureRecognizerBegan:(_Bool)arg3;
- (double)_valueFromSystemGestureRecognizerWithTranslation:(double)arg1 velocity:(double)arg2;
- (_Bool)_completeTransactionWithTranslation:(double)arg1 velocity:(double)arg2;
- (double)_systemGestureRecognizerVelocity;
- (double)_systemGestureRecognizerTranslation;
- (id)_layoutStateTransitionWorkspaceTransaction;
- (void)_systemGestureRecognizerFailed;
- (void)_systemGestureRecognizerEnded;
- (void)_systemGestureRecognizerChanged;
- (void)_systemGestureRecognizerBegan;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 floatingApplicationRootViewController:(id)arg2 panSystemGestureRecognizer:(id)arg3;

@end

