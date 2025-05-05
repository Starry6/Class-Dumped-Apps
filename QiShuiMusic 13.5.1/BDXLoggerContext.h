@interface BDXLoggerContext : NSObject
@property (nonatomic) NSString paramsMessage;
@property (nonatomic) NSString containerName;
@property (nonatomic) NSString bulletSession;
@property (nonatomic) NSString xBridgeSession;
@property (nonatomic) NSString resourceLoaderSession;
@property (nonatomic) NSString containerID;
@property (nonatomic) NSString xBridgeMethodName;
@property (nonatomic) NSString xBridgeMethodStage;
- (id)bulletSession;
- (id)paramsMessage;
- (id)resourceLoaderSession;
- (void)setBulletSession:;
- (void)setParamsMessage:;
- (void)setResourceLoaderSession:;
- (void)setXBridgeMethodName:;
- (void)setXBridgeMethodStage:;
- (void)setXBridgeSession:;
- (id)xBridgeMethodName;
- (id)xBridgeMethodStage;
- (id)xBridgeSession;
- (id)containerName;
- (id)init;
- (id)containerID;
- (void)setContainerName:;
- (void)setContainerID:;
- (void)setObject:forKeyedSubscript:;
- (void).cxx_destruct;
@end
