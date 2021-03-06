//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBCoverSheetSlidingViewController.h"

#import "SBGrabberTongueDelegate-Protocol.h"
#import "SBReachabilityObserver-Protocol.h"

@class NSString, SBCoverSheetPanelBackgroundContainerView, SBCoverSheetParallaxContainerView, SBFTouchPassThroughView, SBGrabberTongue, SBUIBackgroundView, SBWallpaperEffectView, UIViewProgressAnimatableProperty;
@protocol SBCoverSheetGrabberDelegate;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver>
{
    id <SBCoverSheetGrabberDelegate> _grabberDelegate;
    SBFTouchPassThroughView *_unlockedContentOverlayView;
    SBCoverSheetPanelBackgroundContainerView *_panelBackgroundContainerView;
    SBFTouchPassThroughView *_parallaxClippingView;
    SBCoverSheetParallaxContainerView *_parallaxContainerView;
    SBGrabberTongue *_grabberTongue;
    SBUIBackgroundView *_panelBlurView;
    SBWallpaperEffectView *_panelWallpaperEffectView;
    UIViewProgressAnimatableProperty *_progressAnimatableProperty;
    double _defaultPresentGestureEdgeRegionSize;
}

@property(nonatomic) double defaultPresentGestureEdgeRegionSize; // @synthesize defaultPresentGestureEdgeRegionSize=_defaultPresentGestureEdgeRegionSize;
@property(retain, nonatomic) UIViewProgressAnimatableProperty *progressAnimatableProperty; // @synthesize progressAnimatableProperty=_progressAnimatableProperty;
@property(retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView; // @synthesize panelWallpaperEffectView=_panelWallpaperEffectView;
@property(retain, nonatomic) SBUIBackgroundView *panelBlurView; // @synthesize panelBlurView=_panelBlurView;
@property(retain, nonatomic) SBGrabberTongue *grabberTongue; // @synthesize grabberTongue=_grabberTongue;
@property(retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView; // @synthesize parallaxContainerView=_parallaxContainerView;
@property(retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView; // @synthesize parallaxClippingView=_parallaxClippingView;
@property(retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView; // @synthesize panelBackgroundContainerView=_panelBackgroundContainerView;
@property(retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView; // @synthesize unlockedContentOverlayView=_unlockedContentOverlayView;
@property(nonatomic) __weak id <SBCoverSheetGrabberDelegate> grabberDelegate; // @synthesize grabberDelegate=_grabberDelegate;
- (void).cxx_destruct;
- (void)_createWallpaperEffectViewFullScreen:(_Bool)arg1;
- (void)_updateWindowVisibility;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueDidDismiss:(id)arg1;
- (void)grabberTongueWillPresent:(id)arg1;
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_animationTickedWithProgress:(double)arg1;
- (void)_endTransitionToAppeared:(_Bool)arg1;
- (void)_updateForLocation:(struct CGPoint)arg1 interactive:(_Bool)arg2;
- (void)_beginTransitionFromAppeared:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

