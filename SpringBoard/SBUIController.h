//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSTransactionObserver-Protocol.h"
#import "SBTouchTemplateGestureRecognizerDelegate-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"
#import "UIInteractionProgressObserver-Protocol.h"
#import "UIWindowDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class MTMaterialView, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHomeScreenWindow, SBIconContentView, SBSwitchAppList, SBSwitchAppSystemGestureRecognizer, SBSwitchAppSystemGestureWorkspaceTransaction, SBSwitcherSlideUpSystemGestureRecognizer, UIForceStageInteractionProgress, UIImage, UIImageView, UIStatusBar, UIView, UIViewFloatAnimatableProperty;

@interface SBUIController : NSObject <SBWallpaperObserver, _UISettingsKeyObserver, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, UIInteractionProgressObserver, UIWindowDelegate>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    UIStatusBar *_fakeSpringBoardStatusBar;
    MTMaterialView *_homeScreenContentBackdropView;
    UIImage *_homeScreenBlurredContentSnapshotImage;
    UIImageView *_homeScreenBlurredContentSnapshotImageView;
    unsigned long long _backdropViewAnimationCount;
    _Bool _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_homeScreenBlurAnimatableProperty;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    unsigned int _ignoringEvents:1;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isFullyCharged:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    id _volumeHandler;
    float _batteryCapacity;
    _Bool _supportsDetailedBatteryCapacity;
    _Bool _disableAppSwitchForcePressDueToHomeButtonForce;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    SBSwitcherSlideUpSystemGestureRecognizer *_switcherSlideUpGestureRecognizer;
    SBSwitchAppSystemGestureWorkspaceTransaction *_switchAppTransaction;
    SBSwitchAppSystemGestureRecognizer *_switchAppSystemGestureRecognizer;
    SBSwitchAppList *_switchAppList;
    long long _ignoreSwitchAppListClearRequests;
    _Bool _handlingHomePress;
    NSMutableSet *_contentRequiringReasons;
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (struct CGAffineTransform)_transformAndFrame:(struct CGRect *)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(struct CGRect)arg4;
+ (struct CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (struct CGRect)_referenceBoundsForApp:(id)arg1;
+ (id)addStatusBarToView:(id)arg1 withSize:(struct CGSize)arg2 destinationFrame:(struct CGRect)arg3 interfaceOrientation:(long long)arg4 scaleFactor:(double)arg5 styleRequest:(id)arg6 statusBarDescriptor:(id)arg7 hidden:(_Bool)arg8;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(_Bool)arg7;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(_Bool)arg5;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(_Bool)arg4;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_legibilityPrototypeSettings;
- (id)_currentFolderLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)programmaticSwitchAppGestureMoveToRightWithCompletion:(CDUnknownBlockType)arg1;
- (void)programmaticSwitchAppGestureMoveToLeftWithCompletion:(CDUnknownBlockType)arg1;
- (void)_programmaticSwitchToAppLayout:(id)arg1 nextwardDirection:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_entityForDisplayItem:(id)arg1;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (_Bool)_isIgnoringSwitchAppListClearRequests;
- (void)_endIgnoringSwitchAppListClearRequests;
- (void)_beginIgnoringSwitchAppListClearRequests;
- (void)clearSwitchAppList;
- (id)_switchAppList;
- (void)_switchAppGestureBegan:(double)arg1;
- (void)_handleSwitchAppGesture:(id)arg1;
- (_Bool)_switchAppSystemGestureShouldBegin:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (_Bool)_appSwitcherSystemGestureShouldBegin:(id)arg1;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (unsigned char)headsetBatteryCapacity;
- (_Bool)isHeadsetBatteryCharging;
- (_Bool)isHeadsetDocked;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
@property(nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging;
- (void)useExtraLargeHammerForNextPossibleIconRotation;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (_Bool)supportsDetailedBatteryCapacity;
- (_Bool)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(_Bool)arg1;
- (void)externalChargingAccessoriesChanged;
- (void)ACPowerChanged;
- (void)_possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (_Bool)isConnectedToChargeIncapablePowerSource;
- (_Bool)isConnectedToExternalChargingSource;
- (_Bool)isOnAC;
- (_Bool)isFullyCharged;
- (_Bool)isBatteryCharging;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)playConnectedToPowerSoundIfNecessary;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (_Bool)_ignoringEvents;
- (void)_resumeEventsIfNecessary;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)_ignoreEvents;
- (_Bool)_allowSwitcherGesture;
- (_Bool)isAppSwitcherShowing;
- (_Bool)handleHomeButtonDoublePressDown;
- (void)_backgroundContrastDidChange:(id)arg1;
- (_Bool)handleHomeButtonSinglePressUp;
- (_Bool)isHandlingHomeButtonPress;
- (_Bool)_handleButtonEventToSuspendDisplays:(_Bool)arg1 displayWasSuspendedOut:(_Bool *)arg2;
- (_Bool)disableAppSwitchForcePressDueToHomeButtonForce;
- (_Bool)dissmissAlertItemsAndSheetsIfPossible;
- (_Bool)hasVisibleAlertItemOrSheet:(out _Bool *)arg1;
- (void)_switchToHomeScreenWallpaperAnimated:(_Bool)arg1;
- (void)stopRestoringIconList;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(_Bool)arg1;
- (void)_invalidateBackdropSnapshot;
- (void)_updateBackdropViewIfNeeded;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (id)homeScreenBlurredContentSnapshotImage;
- (void)endRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2;
- (void)beginRequiringContentForReason:(id)arg1;
- (_Bool)isIconListViewTornDown;
- (void)tearDownIconListAndBar;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1;
- (void)restoreContentUpdatingStatusBar:(_Bool)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceUILocked;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(long long)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (long long)_transitionSourceForDockIconLocation:(long long)arg1;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (void)launchIcon:(id)arg1 fromLocation:(long long)arg2 context:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (void)_setupHomeScreenContentBackdropView;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)scalingView;
- (id)contentView;
- (id)window;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(_Bool)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (_Bool)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)_willRevealOrHideContentView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

