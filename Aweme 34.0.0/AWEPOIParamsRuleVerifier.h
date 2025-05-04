@interface AWEPOIParamsRuleVerifier : NSObject
+ (id)ruleMap;
+ (void)registerRuleVerifier:;
+ (void)verifyEventParam:ruleModel:error:;
@end
