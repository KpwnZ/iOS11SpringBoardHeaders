//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBViewControllerPercentCompletionReporting-Protocol.h"
#import "SBViewControllerReversibleTransitioning-Protocol.h"
#import "SBViewControllerTransitionRestartedReporting-Protocol.h"
#import "UIViewControllerContextTransitioning-Protocol.h"

@protocol SBViewControllerContextTransitioning <UIViewControllerContextTransitioning, SBViewControllerReversibleTransitioning, SBViewControllerPercentCompletionReporting, SBViewControllerTransitionRestartedReporting>
- (_Bool)wasPreviousPhaseInteractive;
- (_Bool)initiallyInteractive;
- (void)restartTransition;
- (_Bool)supportsRestarting;
- (_Bool)supportsCancelling;
- (_Bool)isTransitioning;
@end
