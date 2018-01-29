//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject
{
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_stateLock_storeForBundleIdentifier:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)saveSynchronously;
- (void)invalidateCache;
- (void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3;
- (id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

