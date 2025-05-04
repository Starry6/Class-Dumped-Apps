@interface AWEDataLayerNetworkCacheManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> cacheQueue;
- (id)storageWithConfig:;
- (void)getNetworkCacheWithIdentifier:config:completion:;
- (void)setNetworkCache:cacheIdentifier:config:;
- (void)clearNetworkCacheWithIdentifier:config:;
- (void)setCacheQueue:;
- (void).cxx_destruct;
- (id)cacheQueue;
+ (id)sharedManager;
@end
