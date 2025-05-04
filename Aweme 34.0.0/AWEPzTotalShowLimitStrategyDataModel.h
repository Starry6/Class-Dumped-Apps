@interface AWEPzTotalShowLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel
@property (nonatomic) q countLimit;
- (BOOL)isValid;
- (void)setCountLimit:;
- (long long)countLimit;
+ (id)JSONKeyPathsByPropertyKey;
@end
