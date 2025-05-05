@interface ABUAdShowPeriodRule : ABUAdRule
@property (nonatomic) q period;
- (BOOL)canUse;
- (id)initWithRulesDic:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)period;
- (void)setPeriod:;
@end
