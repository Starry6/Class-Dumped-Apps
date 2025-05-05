@interface NEDNSSettingsNetworkAgent : NENetworkAgent
@property (nonatomic) NEDNSSettings settings;
- (id)copyAgentData;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (id)agentDescription;
+ (id)agentType;
+ (id)agentDomain;
+ (id)agentFromData:;
@end
