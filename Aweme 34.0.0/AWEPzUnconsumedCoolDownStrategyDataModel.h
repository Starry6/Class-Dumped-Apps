@interface AWEPzUnconsumedCoolDownStrategyDataModel : AWEPzStrategyBaseRecordDataModel
@property (nonatomic) q exitTime;
@property (nonatomic) q countLimit;
- (BOOL)isValid;
- (void)setCountLimit:;
- (long long)countLimit;
- (long long)exitTime;
- (void)setExitTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
