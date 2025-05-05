@interface NEPolicyRouteRule : NSObject
@property (nonatomic) NSUUID networkAgentUUID;
@property (nonatomic) I controlUnit;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)networkAgentUUID;
- (void).cxx_destruct;
- (id)description;
- (void)setControlUnit:;
- (unsigned int)controlUnit;
- (void)setNetworkAgentUUID:;
+ (id)routeRuleWithAction:forNetworkAgent:;
+ (id)routeRuleWithAction:forType:;
+ (id)routeRuleWithAction:forInterfaceName:;
@end
