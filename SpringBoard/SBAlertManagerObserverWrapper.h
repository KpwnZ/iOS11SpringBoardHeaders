//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBAlertManagerObserver;

@interface SBAlertManagerObserverWrapper : NSObject
{
    CDStruct_8fb8c794 _flags;
    id <SBAlertManagerObserver> _observer;
}

@property(readonly, nonatomic) CDStruct_8fb8c794 flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) __weak id <SBAlertManagerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 flags:(CDStruct_8fb8c794)arg2;

@end
