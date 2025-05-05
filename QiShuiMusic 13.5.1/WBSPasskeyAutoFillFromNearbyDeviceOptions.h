@interface WBSPasskeyAutoFillFromNearbyDeviceOptions : NSObject
@property (nonatomic) NSUUID operationUUID;
@property (nonatomic) NSXPCListenerEndpoint agentEndpoint;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)operationUUID;
- (void).cxx_destruct;
- (id)initWithOperationUUID:;
- (id)agentEndpoint;
+ (BOOL)supportsSecureCoding;
@end
