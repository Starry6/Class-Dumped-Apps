@interface CARSessionRequestClient : NSObject
@property (nonatomic) NSXPCConnection serviceConnection;
- (id)serviceConnection;
- (void)dealloc;
- (void)setServiceConnection:;
- (void).cxx_destruct;
- (void)cancelRequests;
- (void)startSessionWithHost:completion:;
- (void)stoppedSessionForHostIdentifier:;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:;
- (void)prepareForRemovingWiFiUUID:completion:;
@end
