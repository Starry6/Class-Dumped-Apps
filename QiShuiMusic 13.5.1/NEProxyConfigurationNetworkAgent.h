@interface NEProxyConfigurationNetworkAgent : NENetworkAgent
- (id)copyAgentData;
- (void).cxx_destruct;
- (id)agentDescription;
- (id)initWithProxyConfiguration:;
+ (id)agentType;
+ (id)agentDomain;
+ (id)agentFromData:;
@end
