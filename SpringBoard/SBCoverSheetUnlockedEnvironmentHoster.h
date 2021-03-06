//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SBCoverSheetUnlockedEnvironmentHostingViewController, UIWindow;
@protocol SBUnlockedEnvironmentWindowsProvider;

@interface SBCoverSheetUnlockedEnvironmentHoster : NSObject
{
    id <SBUnlockedEnvironmentWindowsProvider> _windowsProvider;
    UIWindow *_hostingWindow;
    SBCoverSheetUnlockedEnvironmentHostingViewController *_viewController;
    NSMutableArray *_hostedWindowWrappers;
}

@property(retain, nonatomic) NSMutableArray *hostedWindowWrappers; // @synthesize hostedWindowWrappers=_hostedWindowWrappers;
@property(retain, nonatomic) SBCoverSheetUnlockedEnvironmentHostingViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) id <SBUnlockedEnvironmentWindowsProvider> windowsProvider; // @synthesize windowsProvider=_windowsProvider;
- (void).cxx_destruct;
- (_Bool)isHostingUnlockedEnvironmentWindows;
- (void)setUnlockedEnvironmentWindowsHidden:(_Bool)arg1;
- (void)stopHostingUnlockedEnvironmentWindows;
- (void)startHostingUnlockedEnvironmentWindows;
- (id)init;

@end

