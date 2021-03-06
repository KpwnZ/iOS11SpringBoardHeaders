//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSTimer;
@protocol SBPanSystemGestureRecognizerDelegate;

@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _initialTouchReceived;
    double _initialTouchReceivedTimeInterval;
    _Bool _failsPastMaximumPressDurationWithoutHysteresis;
    double _maximumPressDuration;
    NSTimer *_noHysterisisCancellationTimer;
}

@property(retain, nonatomic) NSTimer *noHysterisisCancellationTimer; // @synthesize noHysterisisCancellationTimer=_noHysterisisCancellationTimer;
@property(nonatomic) double maximumPressDuration; // @synthesize maximumPressDuration=_maximumPressDuration;
@property(nonatomic) _Bool failsPastMaximumPressDurationWithoutHysteresis; // @synthesize failsPastMaximumPressDurationWithoutHysteresis=_failsPastMaximumPressDurationWithoutHysteresis;
- (void).cxx_destruct;
- (void)invalidateNoHysterisisCancellationTimer;
- (void)setupNoHysterisisCancellationTimerIfNeeded;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(nonatomic) __weak id <SBPanSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

