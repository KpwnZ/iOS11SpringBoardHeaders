//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAppIconForceTouchSettings : SBUISettings
{
    _Bool _enableUIPreviewInteractionAnimations;
    float _animationDurationMultiplier;
}

+ (id)settingsControllerModule;
+ (id)defaults;
@property(nonatomic) _Bool enableUIPreviewInteractionAnimations; // @synthesize enableUIPreviewInteractionAnimations=_enableUIPreviewInteractionAnimations;
@property(nonatomic) float animationDurationMultiplier; // @synthesize animationDurationMultiplier=_animationDurationMultiplier;
- (void)setDefaultValues;

@end

