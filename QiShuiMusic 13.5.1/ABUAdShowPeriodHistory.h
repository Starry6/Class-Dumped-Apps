@interface ABUAdShowPeriodHistory : ABUAdHistory
@property (nonatomic) q showTimePre;
@property (nonatomic) q showPeriod;
- (void)setShowTimePre:;
- (BOOL)canUse;
- (id)infoForHistory;
- (id)initWithHistoryDic:;
- (void)setShowPeriod:;
- (long long)showPeriod;
- (long long)showTimePre;
- (void)updateHistory;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void)updateTime;
- (id)initWithRule:;
@end
