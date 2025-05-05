@interface PCCIDSEndpoint : PCCEndpoint
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)service:account:identifier:didSendWithSuccess:error:;
- (void)service:account:incomingResourceAtURL:metadata:fromID:context:;
- (void)service:account:incomingMessage:fromID:;
- (void).cxx_destruct;
- (void)service:account:identifier:hasBeenDeliveredWithContext:;
- (id)startService:;
- (void)runWithDelegate:;
- (BOOL)isDeviceNearby:;
- (id)send:message:error:;
- (id)send:file:metadata:error:;
- (id)deviceIds;
- (id)serviceByDeviceID:;
@end
