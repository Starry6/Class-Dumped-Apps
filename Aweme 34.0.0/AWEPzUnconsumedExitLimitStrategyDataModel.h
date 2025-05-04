@interface AWEPzUnconsumedExitLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel
@property (nonatomic) q showTimeLimit;
@property (nonatomic) q exitTimeLimit;
- (long long)showTimeLimit;
- (long long)exitTimeLimit;
- (void)setShowTimeLimit:;
- (void)setExitTimeLimit:;
- (BOOL)isValid;
+ (id)JSONKeyPathsByPropertyKey;
@end
