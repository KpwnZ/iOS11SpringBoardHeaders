//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject
{
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)description;
- (void)_setKeyboardSuppressed:(_Bool)arg1 forReason:(id)arg2 withPredicate:(CDUnknownBlockType)arg3;
- (void)stopSuppressingKeyboardWithReason:(id)arg1;
- (void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)init;

@end

