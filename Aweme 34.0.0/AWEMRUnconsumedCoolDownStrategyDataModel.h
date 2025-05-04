@interface AWEMRUnconsumedCoolDownStrategyDataModel : NSObject
@property (nonatomic) q exitTime;
@property (nonatomic) q countLimit;
- (BOOL)isValid;
- (id)initWithDictionary:;
- (void)setCountLimit:;
- (long long)countLimit;
- (long long)exitTime;
- (void)setExitTime:;
@end
