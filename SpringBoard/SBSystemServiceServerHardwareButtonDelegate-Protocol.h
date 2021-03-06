//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSystemServiceServerDelegate-Protocol.h"

@class NSString, SBSystemServiceServer;
@protocol FBSystemServiceClient;

@protocol SBSystemServiceServerHardwareButtonDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSystemServiceClient>)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(void (^)(long long))arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSystemServiceClient>)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSystemServiceClient>)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSystemServiceClient>)arg2 acquireAssertionOfType:(long long)arg3 forReason:(NSString *)arg4 withCompletion:(void (^)(BSAction *))arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 clientDidDisconnect:(id <FBSystemServiceClient>)arg2;
@end

