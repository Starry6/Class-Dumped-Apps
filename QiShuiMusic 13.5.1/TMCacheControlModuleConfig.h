@interface TMCacheControlModuleConfig : TMModuleConfig
@property (nonatomic) NSDictionary cacheConfig;
- (void)setCacheConfig:;
- (id)cacheConfig;
- (Class)moduleClass;
- (id)initWithDictionary:;
- (void).cxx_destruct;
+ (id)configKey;
@end
