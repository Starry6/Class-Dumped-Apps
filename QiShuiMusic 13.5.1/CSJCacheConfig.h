@interface CSJCacheConfig : NSObject
- (unsigned long long)getBUSDimageCacheMaxMemoryCount;
- (void)destroyConfig;
- (unsigned long long)getBUSDimageCacheMaxMemoryCost;
- (void)setUpBUSDimageCacheMaxMemoryCost;
- (void)setUpBUSDimageCacheMaxMemoryCount;
+ (id)defaultConfig;
@end
