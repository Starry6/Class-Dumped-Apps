@interface PLAssetsdClientXPCConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleInvalidation;
- (id)init;
- (void)addBarrierBlock:;
- (void)prepareToShutdown;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (void)addPhotoLibraryUnavailabilityHandler:;
- (id)remoteObjectProxyWithErrorHandler:;
- (void)_postInterruptedNotification;
- (void)_makeNewResumedConnection;
- (void).cxx_destruct;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:;
- (id)_unboostingRemoteObjectProxy;
- (void)handleInterruption;
- (void)invalidate;
- (id)connectionWithErrorHandler:;
@end
