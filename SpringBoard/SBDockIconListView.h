//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBRootIconListView.h"

@interface SBDockIconListView : SBRootIconListView
{
    long long _layoutStyle;
    double _spacing;
    unsigned long long _minimumNumberOfIconsToDistributeEvenlyToEdges;
    struct UIEdgeInsets _layoutInsets;
}

+ (unsigned long long)defaultIconContentType;
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)maxIcons;
+ (double)defaultHeight;
@property(nonatomic) unsigned long long minimumNumberOfIconsToDistributeEvenlyToEdges; // @synthesize minimumNumberOfIconsToDistributeEvenlyToEdges=_minimumNumberOfIconsToDistributeEvenlyToEdges;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)scaledAlignmentIconSize;
- (double)effectiveSpacingForNumberOfIcons:(unsigned long long)arg1;
@property(readonly, nonatomic) double effectiveSpacing;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 numberOfIcons:(unsigned long long)arg2;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
- (struct CGRect)boundsForLayout;
- (double)_additionalVerticalInsetToCenterIcons;
- (double)_additionalHorizontalInsetToCenterIcons;
- (unsigned long long)rowAtPoint:(struct CGPoint)arg1;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(int *)arg3;
- (unsigned long long)iconsInColumnForSpacingCalculation;
- (unsigned long long)iconsInRowForSpacingCalculation;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
- (long long)iconLocation;
- (id)initWithModel:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@end

