@interface AFDeviceContextConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_xpcConnection;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)_handleXPCConnectionInvalidation;
- (void)_clearXPCConnection;
- (void)endUpdateLocalDeviceContext;
- (void)donateSerializedContextMapByPrivacyClass:withMetadataMap:forType:pushToRemote:completion:;
- (id)initWithQueue:instanceContext:delegate:;
- (void)getLocalDeviceContextWithCompletion:;
- (void)beginUpdateLocalDeviceContext;
- (void)_handleXPCConnectionInterruption;
- (id)_remoteServiceWithErrorHandler:;
- (void)_fetchLocalDeviceContextWithCompletion:;
- (void)_beginUpdateLocalDeviceContext;
- (void)_endUpdateLocalDeviceContext;
- (void)_updateLocalDeviceContext:;
@end
