@interface IESECGoodsDetailMemoryCacheSettings : MTLModel
@property (nonatomic) BOOL optimizeOn;
@property (nonatomic) NSDictionary sceneIDDict;
@property (nonatomic) q defaultTime;
@property (nonatomic) q cacheNum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDefaultTime:;
- (void)setSceneIDDict:;
- (long long)cacheNum;
- (long long)defaultTime;
- (BOOL)optimizeOn;
- (id)sceneIDDict;
- (void)setCacheNum:;
- (void)setOptimizeOn:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
