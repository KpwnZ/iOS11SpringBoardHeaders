//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBReusableView-Protocol.h"

@class NSArray, SBIcon;
@protocol SBIconAccessoryInfoProvider;

@protocol SBIconAccessoryView <SBReusableView>
+ (NSArray *)checkoutAccessoryImagesForIcon:(SBIcon *)arg1 location:(long long)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (_Bool)displayingAccessory;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)configureForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2 withPreparation:(void (^)(void))arg3 animation:(void (^)(void))arg4 completion:(void (^)(_Bool))arg5;
@end

