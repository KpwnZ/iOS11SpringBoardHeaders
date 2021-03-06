//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "SBCountedMapValue-Protocol.h"

@class NSString, SBIconLabelImageParameters;
@protocol NSCopying><NSObject;

@interface SBIconLabelLegibilityImage : UIImage <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;
}

+ (void)checkinLegibilityImage:(id)arg1;
+ (id)checkoutLegibilityImageWithLabelImage:(id)arg1 parameters:(id)arg2;
+ (_Bool)needsLegibilityImageForParameters:(id)arg1;
+ (double)_strengthForLegibilityStyle:(long long)arg1;
+ (id)_legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2;
+ (id)_legibilityImagePool;
+ (id)_legibilityImageCountedMap;
+ (struct CGSize)_maxLegibilityImageSizeForLabelSize:(struct CGSize)arg1;
@property(readonly, copy) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (_Bool)isIconLabelLegibilityImage;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject> countedMapKey;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

