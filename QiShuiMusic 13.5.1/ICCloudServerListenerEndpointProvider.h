@interface ICCloudServerListenerEndpointProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)notifyDeviceSetupFinishedWithCompletion:;
- (id)listenerEndpointForService:error:;
- (id)_listenerEndpointProviderConnection;
@end
