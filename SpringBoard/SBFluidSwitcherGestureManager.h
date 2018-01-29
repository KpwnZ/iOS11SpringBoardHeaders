//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "BSTransactionObserver-Protocol.h"
#import "SBGrabberTongueDelegate-Protocol.h"
#import "SBHomeGestureParticipantDelegate-Protocol.h"
#import "SBHomeGrabberDelegate-Protocol.h"
#import "SBPanSystemGestureRecognizerDelegate-Protocol.h"
#import "SBSceneLayoutViewControllerTransitioningDelegate-Protocol.h"
#import "SBSystemGestureRecognizerDelegate-Protocol.h"
#import "SBTouchTemplateGestureRecognizerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, NSTimer, SBAppLayout, SBAppSwitcherSettings, SBFluidSwitcherGestureWorkspaceTransaction, SBFluidSwitcherPanGestureRecognizer, SBFluidSwitcherScreenEdgePanGestureRecognizer, SBFluidSwitcherViewController, SBGrabberTongue, SBHomeGestureParticipant, SBHomeGestureSettings, SBHomeGrabberSettings, SBHomeGrabberView, SBPanSystemGestureRecognizer, SBScrunchSystemGestureRecognizer, SBSwitcherForcePressSystemGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol SBFluidSwitcherGestureManagerDelegate;

@interface SBFluidSwitcherGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, _UISettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBHomeGestureParticipantDelegate, SBPanSystemGestureRecognizerDelegate, SBSceneLayoutViewControllerTransitioningDelegate>
{
    _Bool _gridSwitcherPanIsLatched;
    _Bool _interactivelyPresentingTongue;
    _Bool _playedEdgeProtectHaptic;
    _Bool _shouldRubberbandGrabberViewForReduceMotion;
    id <SBFluidSwitcherGestureManagerDelegate> _delegate;
    SBHomeGrabberView *_currentHomeGrabberView;
    SBFluidSwitcherViewController *_switcherViewController;
    SBFluidSwitcherGestureWorkspaceTransaction *_activeGestureTransaction;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBHomeGestureSettings *_homeGestureSettings;
    SBHomeGrabberSettings *_homeGrabberSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
    double _gridSwitcherGestureBeganTimestamp;
    double _gestureStartTime;
    SBFluidSwitcherPanGestureRecognizer *_deckInSwitcherPanGestureRecognizer;
    SBGrabberTongue *_deckGrabberTongue;
    SBPanSystemGestureRecognizer *_activateReachabilityGestureRecognizer;
    UINotificationFeedbackGenerator *_edgeProtectFeedbackGenerator;
    NSTimer *_delayedHomeGrabberUpdateTimer;
    UIView *_exclusionTrapezoidDebugView;
    SBSwitcherForcePressSystemGestureRecognizer *_deckSwitcherForcePressRecognizer;
    SBFluidSwitcherScreenEdgePanGestureRecognizer *_gridBottomEdgePanGestureRecognizer;
    SBScrunchSystemGestureRecognizer *_gridScrunchToHomeGestureRecognizer;
}

@property(retain, nonatomic) SBScrunchSystemGestureRecognizer *gridScrunchToHomeGestureRecognizer; // @synthesize gridScrunchToHomeGestureRecognizer=_gridScrunchToHomeGestureRecognizer;
@property(retain, nonatomic) SBFluidSwitcherScreenEdgePanGestureRecognizer *gridBottomEdgePanGestureRecognizer; // @synthesize gridBottomEdgePanGestureRecognizer=_gridBottomEdgePanGestureRecognizer;
@property(retain, nonatomic) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer; // @synthesize deckSwitcherForcePressRecognizer=_deckSwitcherForcePressRecognizer;
@property(nonatomic) _Bool shouldRubberbandGrabberViewForReduceMotion; // @synthesize shouldRubberbandGrabberViewForReduceMotion=_shouldRubberbandGrabberViewForReduceMotion;
@property(retain, nonatomic) UIView *exclusionTrapezoidDebugView; // @synthesize exclusionTrapezoidDebugView=_exclusionTrapezoidDebugView;
@property(retain, nonatomic) NSTimer *delayedHomeGrabberUpdateTimer; // @synthesize delayedHomeGrabberUpdateTimer=_delayedHomeGrabberUpdateTimer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator; // @synthesize edgeProtectFeedbackGenerator=_edgeProtectFeedbackGenerator;
@property(nonatomic) _Bool playedEdgeProtectHaptic; // @synthesize playedEdgeProtectHaptic=_playedEdgeProtectHaptic;
@property(nonatomic) _Bool interactivelyPresentingTongue; // @synthesize interactivelyPresentingTongue=_interactivelyPresentingTongue;
@property(retain, nonatomic) SBPanSystemGestureRecognizer *activateReachabilityGestureRecognizer; // @synthesize activateReachabilityGestureRecognizer=_activateReachabilityGestureRecognizer;
@property(retain, nonatomic) SBGrabberTongue *deckGrabberTongue; // @synthesize deckGrabberTongue=_deckGrabberTongue;
@property(retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer; // @synthesize deckInSwitcherPanGestureRecognizer=_deckInSwitcherPanGestureRecognizer;
@property(nonatomic) double gestureStartTime; // @synthesize gestureStartTime=_gestureStartTime;
@property(nonatomic) double gridSwitcherGestureBeganTimestamp; // @synthesize gridSwitcherGestureBeganTimestamp=_gridSwitcherGestureBeganTimestamp;
@property(nonatomic) _Bool gridSwitcherPanIsLatched; // @synthesize gridSwitcherPanIsLatched=_gridSwitcherPanIsLatched;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBHomeGrabberSettings *homeGrabberSettings; // @synthesize homeGrabberSettings=_homeGrabberSettings;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(retain, nonatomic) SBAppSwitcherSettings *appSwitcherSettings; // @synthesize appSwitcherSettings=_appSwitcherSettings;
@property(retain, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction; // @synthesize activeGestureTransaction=_activeGestureTransaction;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(nonatomic) __weak SBHomeGrabberView *currentHomeGrabberView; // @synthesize currentHomeGrabberView=_currentHomeGrabberView;
@property(nonatomic) __weak id <SBFluidSwitcherGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateHomeGrabberWithAnimationMode:(long long)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)grabberTongueWillDismiss:(id)arg1;
- (void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (_Bool)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)customTongueViewForGrabberTongue:(id)arg1;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_updateExclusionTrapezoidDebugView;
- (_Bool)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)arg1;
- (_Bool)_suppressGrabberInOrderToAllowSwipesImmediatelyAfterTransition;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)_hideGrabberAnimated:(_Bool)arg1;
- (_Bool)_supportsForcePressGesture;
- (id)deckBottomEdgePanGestureRecognizer;
- (_Bool)_isTransactionRunningForGestureRecognizer:(id)arg1;
- (Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)arg1;
- (long long)_gestureTypeForGestureRecognizer:(id)arg1;
- (_Bool)_shouldBeginDeckForcePressGesture:(id)arg1;
- (_Bool)_shouldBeginGridScrunchGesture:(id)arg1;
- (_Bool)_shouldBeginDeckInSwitcherPanGesture:(id)arg1;
- (_Bool)_shouldBeginBottomEdgePanGesture:(id)arg1;
- (_Bool)_shouldBeginReachabilityGesture:(id)arg1;
- (void)sceneLayoutControllerDidEndLayoutStateTransition:(id)arg1 wasInterrupted:(_Bool)arg2;
- (void)sceneLayoutController:(id)arg1 didBeginLayoutStateTransitionWithContext:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_startFluidSwitcherTransactionWithLabel:(id)arg1 gestureRecognizer:(id)arg2 gestureType:(long long)arg3;
- (void)_switcherGestureBegan:(id)arg1;
- (void)_handleGridSwitcherPanGesture:(id)arg1;
- (_Bool)gridSwitcherShouldLatchToPanRecognizer:(id)arg1;
- (void)_handleDeckSwitcherForcePressGesture:(id)arg1;
- (void)_updateDeckSwitcherForcePressGesturePresence;
- (void)_handleSwitcherPanGestureEnded:(id)arg1;
- (void)_handleSwitcherPanGestureChanged:(id)arg1;
- (void)_handleSwitcherPanGestureBegan:(id)arg1;
- (void)_handleDeckSwitcherPanGesture:(id)arg1;
- (void)_activateReachability:(id)arg1;
- (void)_handleScrunchGesture:(id)arg1;
@property(readonly, nonatomic) struct CGPoint activeGestureVelocity;
@property(readonly, nonatomic) _Bool hasActiveGestureTransaction;
@property(readonly, nonatomic) SBAppLayout *selectedAppLayout;
- (void)dealloc;
- (id)initWithFluidSwitcherViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

