//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBDockOffscreenFractionModifying-Protocol.h"

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>
{
    NSString *_reason;
    SBRootFolderView *_folderView;
    double _desiredOffscreenFraction;
}

@property(nonatomic) double desiredOffscreenFraction; // @synthesize desiredOffscreenFraction=_desiredOffscreenFraction;
@property(retain, nonatomic) SBRootFolderView *folderView; // @synthesize folderView=_folderView;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)setDockOffscreenFraction:(double)arg1;
- (void)dealloc;
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
