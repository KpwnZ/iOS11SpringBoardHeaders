//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBAppSwitcherPageContentView-Protocol.h"

@class NSString;

@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView>
{
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
@property(nonatomic) double cornerRadius;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

