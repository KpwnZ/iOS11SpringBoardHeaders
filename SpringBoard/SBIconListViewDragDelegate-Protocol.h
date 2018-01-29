//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBIconListView, SBIconView, UIDragItem, UIDropProposal, UITargetedDragPreview;
@protocol UIDragAnimating, UIDropSession;

@protocol SBIconListViewDragDelegate <NSObject>
- (void)iconListView:(SBIconListView *)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDragItem:(UIDragItem *)arg2 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)iconListView:(SBIconListView *)arg1 previewForDroppingIconDragItem:(UIDragItem *)arg2 proposedPreview:(UITargetedDragPreview *)arg3;
- (void)iconListView:(SBIconListView *)arg1 performIconDrop:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidExit:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSession:(id <UIDropSession>)arg2 didPauseAtLocation:(struct CGPoint)arg3;
- (UIDropProposal *)iconListView:(SBIconListView *)arg1 iconDropSessionDidUpdate:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 canHandleIconDropSession:(id <UIDropSession>)arg2;
@end

