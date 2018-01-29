//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "SBUIRemoteAlertHostInterface-Protocol.h"

@class NSString;
@protocol _SBRemoteAlertHostViewControllerDelegate;

@interface _SBRemoteAlertHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface>
{
    id <_SBRemoteAlertHostViewControllerDelegate> _delegate;
    NSString *_serviceClassName;
    int _overridenStatusBarVisibility;
    _Bool _contentOverlayInsetsSuspended;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic, setter=setContentOverlayInsetsSuspended:) _Bool contentOverlayInsetsSuspended; // @synthesize contentOverlayInsetsSuspended=_contentOverlayInsetsSuspended;
@property(copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(nonatomic) __weak id <_SBRemoteAlertHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContentOverlayInsetsFromParentIfNecessary;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)setLaunchingInterfaceOrientation:(long long)arg1;
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;
- (void)setShouldDismissOnUILock:(_Bool)arg1;
- (int)_preferredStatusBarVisibility;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setStyleOverridesToCancel:(int)arg1 animationSettings:(id)arg2;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setBackgroundWeighting:(double)arg1 animationsSettings:(id)arg2;
- (void)setBackgroundMaterialDescriptor:(id)arg1;
- (void)setSwipeDismissalStyle:(long long)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setAllowsAlertStacking:(_Bool)arg1;
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;
- (void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;
- (void)invalidate;
- (void)deactivate;
- (void)dismiss;
- (void)setAllowsAlertItems:(_Bool)arg1;
- (void)setAllowsBanners:(_Bool)arg1;
- (id)description;

@end

