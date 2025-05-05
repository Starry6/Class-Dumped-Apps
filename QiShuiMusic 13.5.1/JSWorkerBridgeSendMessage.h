@interface JSWorkerBridgeSendMessage : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) @ data;
@property (nonatomic) q code;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) NSString statusDescription;
@property (nonatomic) JSWorkerBridgeReceivedMessage invokeMessage;
- (id)invokeMessage;
- (void)setInvokeMessage:;
- (id)protocolVersion;
- (id)statusDescription;
- (id)init;
- (id)containerID;
- (id)data;
- (void)setContainerID:;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:;
- (void)setCode:;
- (void)setStatusDescription:;
- (id)encodedMessage;
+ (id)messageWithContainerID:;
@end
