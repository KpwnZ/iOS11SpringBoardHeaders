//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialKit/MTPlatterView.h>

@class UIViewController;
@protocol SBDashBoardAdjunctItemHosting;

@interface SBDashBoardAdjunctItemView : MTPlatterView
{
    UIViewController<SBDashBoardAdjunctItemHosting> *_contentHost;
    struct CGSize _sizeToMimic;
}

@property(nonatomic) __weak UIViewController<SBDashBoardAdjunctItemHosting> *contentHost; // @synthesize contentHost=_contentHost;
@property(nonatomic) struct CGSize sizeToMimic; // @synthesize sizeToMimic=_sizeToMimic;
- (void).cxx_destruct;
- (void)_layoutContentHost;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;

@end

