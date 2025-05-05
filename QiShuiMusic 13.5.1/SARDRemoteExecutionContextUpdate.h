@interface SARDRemoteExecutionContextUpdate : SABaseClientBoundCommand
@property (nonatomic) NSData executionContextUpdate;
@property (nonatomic) NSString remoteDeviceAssistantId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)executionContextUpdate;
- (void)setExecutionContextUpdate:;
- (id)remoteDeviceAssistantId;
- (void)setRemoteDeviceAssistantId:;
@end
