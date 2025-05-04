@interface AWEImagePostLaunchInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setupYYCacheConfig;
+ (void)setupBDCacheConfigWithConfig:;
+ (void)setupMemoryConfig:cacheConfig:;
+ (void)setupDiskConfig:cacheConfig:;
+ (void)setupAWEConfig:cacheConfig:;
+ (void)execute;
@end
