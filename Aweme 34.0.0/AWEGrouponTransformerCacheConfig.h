@interface AWEGrouponTransformerCacheConfig : NSObject
@property (nonatomic) q strategy;
@property (nonatomic) double effectivePeriod;
- (id)initWithStrategy:expiredDuration:;
- (double)effectivePeriod;
- (void)setEffectivePeriod:;
- (long long)strategy;
- (id)initWithStrategy:;
- (void)setStrategy:;
@end
