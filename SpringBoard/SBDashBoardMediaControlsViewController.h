//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "MediaControlsPanelViewControllerDelegate-Protocol.h"
#import "SBDashBoardAdjunctItemHosting-Protocol.h"

@class MediaControlsPanelViewController, NSString;

@interface SBDashBoardMediaControlsViewController : SBDashBoardViewControllerBase <MediaControlsPanelViewControllerDelegate, SBDashBoardAdjunctItemHosting>
{
    MediaControlsPanelViewController *_mediaControlsPanelViewController;
    struct CGSize _containerSize;
}

+ (Class)viewClass;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (void).cxx_destruct;
- (struct CGRect)_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(_Bool)arg1;
- (void)_layoutMediaControls;
- (void)mediaControlsPanelViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (struct CGSize)preferredContentSize;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

