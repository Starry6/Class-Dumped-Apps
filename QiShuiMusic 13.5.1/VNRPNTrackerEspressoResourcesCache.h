@interface VNRPNTrackerEspressoResourcesCache : NSObject
- (void)releaseCachedResources;
- (id)init;
- (id)createRPNTrackerResourcesConfiguredWithOptions:error:;
- (BOOL)addRPNTrackerResourcesConfiguredForOptions:resources:error:;
- (void).cxx_destruct;
- (id)locateRPNTrackerResourcesConfiguredForOptions:error:;
+ (id)cacheOptionsKeys;
+ (id)cacheKeyFromOptions:error:;
@end
