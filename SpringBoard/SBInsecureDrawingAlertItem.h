//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBInsecureDrawingAlertItem : SBAlertItem
{
    NSString *_processName;
}

@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)ignoreIfAlreadyDisplaying;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;

@end

