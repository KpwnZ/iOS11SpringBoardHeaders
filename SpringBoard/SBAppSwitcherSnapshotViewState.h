//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppSwitcherSnapshotCacheEntry, SBApplication;

@interface SBAppSwitcherSnapshotViewState : NSObject
{
    _Bool _animatingTransition;
    SBApplication *_application;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}

@property(nonatomic, getter=isAnimatingTransition) _Bool animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(retain, nonatomic) SBAppSwitcherSnapshotCacheEntry *cacheEntry; // @synthesize cacheEntry=_cacheEntry;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;

@end

