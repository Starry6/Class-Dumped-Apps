@interface PLCloudResourcePrefetchPredicateOptions : NSObject
@property (nonatomic) q prefetchMode;
@property (nonatomic) q prefetchOptimizeMode;
@property (nonatomic) BOOL excludeDynamicResources;
@property (nonatomic) PLPrefetchConfiguration prefetchConfiguration;
- (id)initWithPrefetchMode:prefetchOptimizeMode:excludeDynamicResources:prefetchConfiguration:;
- (id)prefetchConfiguration;
- (void)setPrefetchOptimizeMode:;
- (void)setPrefetchConfiguration:;
- (long long)prefetchMode;
- (long long)prefetchOptimizeMode;
- (void)setExcludeDynamicResources:;
- (BOOL)excludeDynamicResources;
- (void).cxx_destruct;
- (void)setPrefetchMode:;
- (id)copyWithZone:;
@end
