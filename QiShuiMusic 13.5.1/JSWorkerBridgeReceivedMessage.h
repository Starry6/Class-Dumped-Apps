@interface JSWorkerBridgeReceivedMessage : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) NSString methodName;
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) NSString namescope;
@property (nonatomic) NSDictionary data;
- (id)initWithMethodName:rawData:containerID:;
- (id)namescope;
- (id)protocolVersion;
- (id)containerID;
- (id)data;
- (void)setContainerID:;
- (void).cxx_destruct;
- (void)decode;
- (id)rawData;
- (id)methodName;
@end
