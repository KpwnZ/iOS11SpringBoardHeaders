//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBUIBannerContext, SBUIBannerItem, UIView;
@protocol SBUIBannerTarget, SBUIBannerView;

@protocol SBUIBannerSource <NSObject>
- (UIView<SBUIBannerView> *)newBannerViewForContext:(SBUIBannerContext *)arg1;
- (SBUIBannerItem *)dequeueNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;
- (SBUIBannerItem *)peekNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;

@optional
- (void)bannerViewDidDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;
- (void)bannerViewWillDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;
- (void)bannerViewDidAppear:(UIView<SBUIBannerView> *)arg1;
- (void)bannerViewWillAppear:(UIView<SBUIBannerView> *)arg1;
@end

