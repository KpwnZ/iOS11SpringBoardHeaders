//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISpringLoadedInteractionBehavior-Protocol.h"

@class NSString;
@protocol SBSpringLoadedInteractionBehaviorDelegate;

@interface SBSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior>
{
    id <SBSpringLoadedInteractionBehaviorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSpringLoadedInteractionBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

