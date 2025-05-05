@interface BDARifleBundelManager : NSObject
@property (nonatomic) NSCache bundleCaches;
@property (nonatomic) NSObject<OS_dispatch_queue> storageQueue;
- (id)bundleCaches;
- (id)cacheKeyFromAccesskey:channel:bundle:surl:;
- (void)saveTemplateBundleWithRifleResource:rvProfiler:;
- (void)setBundleCaches:;
- (id)templateBundleWithAccesskey:urlString:;
- (id)init;
- (id)storageQueue;
- (void).cxx_destruct;
- (void)setStorageQueue:;
+ (id)sharedInstance;
@end
