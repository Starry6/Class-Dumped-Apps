@interface AWEGrouponLynxTemplateDecodeManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> executeQueue;
@property (nonatomic) NSMutableDictionary cachedBundlesMap;
- (id)cacheKeyForURL:;
- (id)executeQueue;
- (void)setExecuteQueue:;
- (void)preDecodeTemplateWithUrlList:;
- (void)preDecodeTemplateWithSceneGroup:;
- (id)templateBundleForURL:;
- (void)preDecodeTemplateForURL:;
- (id)cachedBundlesMap;
- (void)setTemplateBundle:forURL:;
- (void)setCachedBundlesMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
