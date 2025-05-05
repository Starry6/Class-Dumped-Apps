@interface ABUAdShowFreqHistory : ABUAdHistory
@property (nonatomic) q showCount;
@property (nonatomic) q showCountDdl;
@property (nonatomic) q period;
@property (nonatomic) q ruleCount;
- (BOOL)canUse;
- (void)increaseCount;
- (id)infoForHistory;
- (id)initWithHistoryDic:;
- (void)setRuleCount:;
- (void)setShowCountDdl:;
- (long long)showCountDdl;
- (void)updateHistory;
- (void)resetCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (long long)period;
- (void)updateTime;
- (id)initWithRule:;
- (long long)ruleCount;
- (void)setPeriod:;
- (long long)showCount;
- (void)setShowCount:;
+ (long long)timeConversWithInterval:;
@end
