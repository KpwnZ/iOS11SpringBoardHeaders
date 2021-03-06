//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAnimationSettings, NCNotificationAction, NCNotificationViewController, NSDictionary, UIView;
@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (id <UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (NSDictionary *)notificationUsageTrackingStateForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(NCNotificationViewController *)arg1;
- (_Bool)shouldLoadAudioAccessoryViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (struct CGRect)presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void (^)(_Bool))arg2;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
@end

