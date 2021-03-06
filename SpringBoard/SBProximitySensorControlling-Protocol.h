//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBProximitySensorControlling <NSObject>
@property(readonly, nonatomic, getter=isProximityDetectionSuspended) _Bool proximityDetectionSuspended;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
- (void)setProximityDetectionSuspended:(_Bool)arg1 multitouchSuspended:(_Bool)arg2 source:(long long)arg3;
- (void)setProximityDetectionAndMultitouchSuspended:(_Bool)arg1 source:(long long)arg2;
- (void)resetProximityCalibration;
@end

