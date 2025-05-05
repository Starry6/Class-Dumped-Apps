@interface SCNAssetCatalog : NSObject
@property (nonatomic) NSURL catalogURL;
- (void)dealloc;
- (id)actionNamed:;
- (id)sceneNamed:;
- (id)animationNamed:;
- (id)URLOfResourceNamed:;
- (void)cacheObject:withTimestamp:forKey:;
- (id)sceneWithURL:;
- (id)particleSystemNamed:;
- (id)pathByMakingURLRelativeToCatalog:;
- (id)catalogURL;
+ (void)clearCache;
+ (id)recursivePathsForResourcesOfType:inDirectory:;
+ (id)assetCatalogNamed:;
+ (id)assetCatalogWithURL:;
+ (id)assetCatalogForResourceURL:;
+ (id)objectWithName:class:;
@end
