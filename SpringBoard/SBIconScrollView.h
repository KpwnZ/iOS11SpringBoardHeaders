//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : UIScrollView
{
}

- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (_Bool)cancelTouchTracking;

// Remaining properties
@property(nonatomic) __weak id <SBIconScrollViewDelegate> delegate; // @dynamic delegate;

@end

