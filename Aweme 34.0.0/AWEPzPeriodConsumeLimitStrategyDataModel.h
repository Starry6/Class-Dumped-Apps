@interface AWEPzPeriodConsumeLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel
@property (nonatomic) q timeLimit;
@property (nonatomic) q countLimit;
- (void)setTimeLimit:;
- (BOOL)isValid;
- (long long)timeLimit;
- (void)setCountLimit:;
- (long long)countLimit;
+ (id)JSONKeyPathsByPropertyKey;
@end
