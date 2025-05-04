@interface AWEGrouponLifeFeedsLynxPredecodeManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> executeQueue;
@property (nonatomic) NSMutableDictionary cachedBundlesMap;
- (id)cacheKeyForURL:;
- (id)executeQueue;
- (void)setExecuteQueue:;
- (void)preDecodeTemplateWithUrlList:;
- (void)preDecodeCommonTemplates;
- (id)templateBundleForURL:;
- (void)preDecodeTemplatesWithScene:;
- (void)preDecodeTemplateForURL:;
- (id)cachedBundlesMap;
- (void)setTemplateBundle:forURL:;
- (void)setCachedBundlesMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)fetchOptConfig;
+ (id)commonPredecodeTemplates;
+ (id)predecodeTemplatesForScene:;
+ (id)sharedInstance;
@end
