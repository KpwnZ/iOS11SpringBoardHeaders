//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBViewControllerPercentDrivenTransitionUpdating-Protocol.h"
#import "SBViewControllerReversibleTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerInteractiveTransitioning <UIViewControllerInteractiveTransitioning, SBViewControllerPercentDrivenTransitionUpdating, SBViewControllerReversibleTransitioning>
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1;
@end

