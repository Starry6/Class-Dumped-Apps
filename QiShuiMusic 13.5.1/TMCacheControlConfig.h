@interface TMCacheControlConfig : NSObject
@property (nonatomic) NSDictionary cacheControlConfig;
- (id)cacheControlConfig;
- (id)cacheGroups;
- (void)setCacheControlConfig:;
- (void)updateCacheControlConfig:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedConfig;
@end
