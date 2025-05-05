@interface ABUAdLoadFreqRule : ABUAdRule
@property (nonatomic) q period;
@property (nonatomic) q times;
- (BOOL)canUse;
- (id)initWithRulesDic:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)period;
- (void)setPeriod:;
- (long long)times;
- (void)setTimes:;
@end
