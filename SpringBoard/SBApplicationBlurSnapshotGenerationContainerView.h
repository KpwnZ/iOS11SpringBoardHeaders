//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView
{
    UIView *_wallpaperView;
    UIView *_realSnapshotView;
    UIView *_liveBlurView;
}

@property(retain, nonatomic) UIView *liveBlurView; // @synthesize liveBlurView=_liveBlurView;
@property(retain, nonatomic) UIView *realSnapshotView; // @synthesize realSnapshotView=_realSnapshotView;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
