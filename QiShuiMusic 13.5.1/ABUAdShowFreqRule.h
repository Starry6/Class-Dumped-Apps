@interface ABUAdShowFreqRule : ABUAdRule
@property (nonatomic) q period;
@property (nonatomic) q count;
@property (nonatomic) Q timingMode;
- (BOOL)canUse;
- (id)initWithRulesDic:;
- (void)setCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)period;
- (long long)count;
- (void)setPeriod:;
- (unsigned long long)timingMode;
- (void)setTimingMode:;
@end
