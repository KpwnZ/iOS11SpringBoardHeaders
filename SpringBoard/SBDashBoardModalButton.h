//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface SBDashBoardModalButton : UIButton
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    _Bool _isPressed;
}

- (void).cxx_destruct;
- (void)_buttonReleased:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
- (id)initWithFrame:(struct CGRect)arg1;

@end
