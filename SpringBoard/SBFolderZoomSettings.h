//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings
{
    SBAnimationSettings *_innerFolderFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *innerFolderFadeSettings; // @synthesize innerFolderFadeSettings=_innerFolderFadeSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

