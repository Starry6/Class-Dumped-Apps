@interface BDRuleParameterService : NSObject
+ (id)stateParameters;
+ (void)registerParameterWithKey:type:builder:;
+ (void)registerParameterWithKey:type:value:;
+ (void)updateParameterWithKey:type:value:;
@end
