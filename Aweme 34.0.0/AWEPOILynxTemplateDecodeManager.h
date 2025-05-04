@interface AWEPOILynxTemplateDecodeManager : NSObject
@property (nonatomic) NSMutableDictionary cachedBundles;
- (id)cacheKeyForURL:;
- (void)setTemplateBundle:forURL:;
- (id)templateBundleForURL:isPreload:bizCode:;
- (id)cachedBundles;
- (void)setCachedBundles:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
