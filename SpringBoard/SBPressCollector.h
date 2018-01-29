//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer, NSMutableArray, SBPressTuple;
@protocol SBPressCollectorDelegate;

@interface SBPressCollector : NSObject
{
    BSTimer *_hardEndTimer;
    NSMutableArray *_currentSequence;
    SBPressTuple *_currentTuple;
    double _lastHandledDownEvent;
    double _lastHandledUpEvent;
    id <SBPressCollectorDelegate> _delegate;
    double _maxPressDownDuration;
    double _maxPressUpDuration;
}

+ (double)currentTimeStamp;
@property(nonatomic) double maxPressUpDuration; // @synthesize maxPressUpDuration=_maxPressUpDuration;
@property(nonatomic) double maxPressDownDuration; // @synthesize maxPressDownDuration=_maxPressDownDuration;
@property(nonatomic) __weak id <SBPressCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reset;
- (void)_end;
- (void)_fireEndTimerWithDelay:(double)arg1 isButtonDown:(_Bool)arg2;
- (void)_resetTimersIfNecessary;
- (void)_handlePressUpWithTimeStamp:(double)arg1;
- (void)_handlePressDownWithTimeStamp:(double)arg1;
- (void)endCurrentSequence;
- (void)registerPressDownWithTimeStamp:(double)arg1;
- (void)registerPressUpWithTimeStamp:(double)arg1;
- (id)init;

@end

