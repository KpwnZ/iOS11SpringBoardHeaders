//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUIScene, SBSUILoginUISceneClientSettings, UIApplicationSceneSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject
{
    FBUIScene *_scene;
    UIApplicationSceneSettings *_settings;
    SBSUILoginUISceneClientSettings *_updatedClientSettings;
}

@property(retain, nonatomic) SBSUILoginUISceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) FBUIScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

