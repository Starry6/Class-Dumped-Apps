@interface ATMRulesManager : NSObject
@property (nonatomic) NSDictionary autoRules;
- (id)parseAutoRules:;
- (id)autoRules;
- (id)contentWhenHitRule:withParams:;
- (id)parseArray:;
- (id)parseDictionary:;
- (id)parseLeaf:;
- (id)parseRawRules:error:;
- (void)requestAutoRules:;
- (void)requestAutoRulesTest:;
- (void)setAutoRules:;
- (id)init;
- (void).cxx_destruct;
- (id)parse:;
+ (id)shared;
@end
