@interface NEPolicyResult : NSObject
@property (nonatomic) q resultType;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void)setResultType:;
- (long long)resultType;
- (void).cxx_destruct;
- (id)description;
+ (id)passWithFlags:;
+ (id)tunnelIPToInterfaceName:secondaryResultType:;
+ (id)prohibitFilters;
+ (id)routeRules:;
+ (id)scopedNetworkAgent:;
+ (id)drop;
+ (id)allowUnentitled;
+ (id)removeNetworkAgentUUID:;
+ (id)scopeToDirectInterface;
+ (id)dropWithFlags:;
+ (id)netAgentUUID:;
+ (id)filterWithControlUnit:;
+ (id)skipWithOrder:;
+ (id)scopeSocketToInterfaceName:;
+ (id)pass;
+ (id)divertSocketToControlUnit:;
@end
