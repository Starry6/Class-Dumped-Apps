@interface WiFiP2PDNSServiceDiscoveryManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exportedObject;
- (id)exportedInterface;
- (void)startServiceDiscoveryWithConfiguration:;
- (void)handleConnectionEstablishedWithProxy:;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:completionHandler:;
- (id)initUsingWiFiAware:serviceCallback:;
- (void)startServiceDiscoveryWithConfiguration:completionHandler:;
- (id)remoteObjectInterface;
- (void)handleEventType:keyData:valueData:;
- (void)stopServiceDiscoveryWithConfiguration:;
@end
