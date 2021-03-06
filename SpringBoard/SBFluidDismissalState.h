//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIPluginFluidDismissalState-Protocol.h"

@class NSString;

@interface SBFluidDismissalState : NSObject <SBUIPluginFluidDismissalState>
{
    double backgroundWeighting;
    double contentWeighting;
    struct CGRect contentRect;
}

+ (id)stateWithBackgroundWeighting:(double)arg1 contentWeighting:(double)arg2 contentRect:(struct CGRect)arg3;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect;
@property(nonatomic) double contentWeighting; // @synthesize contentWeighting;
@property(nonatomic) double backgroundWeighting; // @synthesize backgroundWeighting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

