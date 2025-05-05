@interface BDXBridgeBulletPreloadMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber availableMemoryThreshold;
@property (nonatomic) NSString preconnectUrl;
@property (nonatomic) q strategy;
- (id)availableMemoryThreshold;
- (id)preconnectUrl;
- (void)setAvailableMemoryThreshold:;
- (void)setPreconnectUrl:;
- (id)schema;
- (long long)strategy;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setStrategy:;
+ (id)strategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
