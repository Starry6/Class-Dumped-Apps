@interface NENetworkAgentRegistrationFileHandle : NEFileHandle
@property (nonatomic) NSNumber sessionType;
@property (nonatomic) NSUUID configurationIdentifier;
@property (nonatomic) NSUUID agentUUID;
@property (nonatomic) NSString name;
@property (nonatomic) Q agentFlags;
- (id)configurationIdentifier;
- (id)sessionType;
- (id)dictionary;
- (unsigned long long)agentFlags;
- (void)setAgentFlags:;
- (unsigned long long)type;
- (id)initWithNetworkAgentRegistration:sessionType:configurationIdentifier:agentUUID:;
- (void).cxx_destruct;
- (id)initWithNetworkAgentRegistration:sessionType:configurationIdentifier:agentUUID:name:;
- (id)initFromDictionary:;
- (id)description;
- (id)name;
- (id)agentUUID;
@end
