//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_uniqueStringRepresentation;
    struct NSString *_type;
    NSString *_displayIdentifier;
}

+ (id)controlCenterDisplayItem;
+ (id)homeScreenDisplayItem;
+ (id)displayItemWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)uniqueStringRepresentation;
- (id)_calculateUniqueStringRepresentation;
- (_Bool)isHomeScreenDisplayItem;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

