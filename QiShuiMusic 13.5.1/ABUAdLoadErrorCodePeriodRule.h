@interface ABUAdLoadErrorCodePeriodRule : ABUAdRule
@property (nonatomic) NSMutableDictionary errorCodes;
- (BOOL)canUse;
- (BOOL)controlPeriodForAdn:andErrorCode:;
- (void)initRuleWithDic:;
- (id)initWithRulesDic:;
- (long long)ruleDurationForAdn:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)errorCodes;
- (void)setErrorCodes:;
@end
