@interface BDXBridgeAppGetCacheDataMethodParamModel : BDXBridgeModel
@property (nonatomic) q cacheDataPath;
- (long long)cacheDataPath;
- (void)setCacheDataPath:;
+ (id)cacheDataPathJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
