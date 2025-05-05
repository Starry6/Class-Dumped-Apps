@interface CARSessionRequestHandlerProxy : NSObject
@property (nonatomic) <CARSessionRequestHandling> requestHandler;
- (void)setRequestHandler:;
- (void).cxx_destruct;
- (id)requestHandler;
- (void)service_startSessionWithHost:reply:;
- (void)service_stoppedSessionWithHostIdentifier:reply:;
- (void)service_startAdvertisingCarPlayControlForUSBWithReply:;
- (void)service_startAdvertisingCarPlayControlForWiFiUUID:reply:;
- (void)service_prepareForRemovingWiFiUUID:reply:;
- (void)service_cancelRequestsWithReply:;
@end
