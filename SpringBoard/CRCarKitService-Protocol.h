//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CRVehicle, NSData, NSDictionary, NSString, NSURL;

@protocol CRCarKitService
- (void)handleCarPlayDiagnosticsWithDeviceScreenshotURL:(NSURL *)arg1 carScreenshotURL:(NSURL *)arg2 reply:(void (^)(void))arg3;
- (void)isCarPlayAllowedWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)handleCarPlayRestrictionChangedWithReply:(void (^)(void))arg1;
- (void)isPairedWithCertificateSerial:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)allowsConnectionsForCertificateSerial:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)allowsConnectionsForWiFiUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSString *, NSError *))arg3;
- (void)isBluetoothInCarWithReply:(void (^)(_Bool, NSString *, NSError *))arg1;
- (void)handleDidDisconnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)handleDidConnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(_Bool, NSString *, NSError *))arg2;
- (void)hasVehiclesWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)fetchAllVehiclesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)removeVehicle:(CRVehicle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)saveVehicle:(CRVehicle *)arg1 reply:(void (^)(CRVehicle *, NSError *))arg2;
@end

