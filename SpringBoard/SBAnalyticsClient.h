//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAnalyticsBackend;

@interface SBAnalyticsClient : NSObject
{
    SBAnalyticsBackend *_backend;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)registerForQueryName:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2;
- (void)emitEvent:(unsigned long long)arg1;
- (id)initWithBackend:(id)arg1;

@end

