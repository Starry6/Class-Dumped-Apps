@interface STDeviceCapabilitiesClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)isCapabilityEnabledForUser:capability:completionHandler:;
+ (id)_newConnection;
@end
