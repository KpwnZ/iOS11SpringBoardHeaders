//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBWindow, UIView, UIWindow;
@protocol FBSceneHostView;

@interface SBWindowSelfHostWrapper : NSObject
{
    SBWindow *_window;
    UIView<FBSceneHostView> *_hostView;
    NSString *_hostRequester;
}

@property(retain, nonatomic) NSString *hostRequester; // @synthesize hostRequester=_hostRequester;
@property(retain, nonatomic) UIView<FBSceneHostView> *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)stopHosting;

@end

