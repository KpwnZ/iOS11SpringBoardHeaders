//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol UICoordinateSpace;

@protocol UICoordinateSpace <NSObject>
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

