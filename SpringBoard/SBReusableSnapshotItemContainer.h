//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBFluidSwitcherItemContainer.h"

#import "SBReusableView-Protocol.h"

@class NSString, SBAppLayout, SBAppSwitcherReusableSnapshotView;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBReusableView>
{
}

@property(retain, nonatomic) SBAppLayout *appLayout; // @dynamic appLayout;
- (void)prepareForReuse;
@property(retain, nonatomic) SBAppSwitcherReusableSnapshotView *snapshotView;
- (void)setContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

