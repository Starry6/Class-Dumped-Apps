@interface AWEConcernYellowDotRequestOptimizeInfoModel : AWEBaseApiModel
@property (nonatomic) NSString yellowPointSourceType;
@property (nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel optimizeStrategyHitInfo;
- (id)optimizeStrategyHitInfo;
- (void)setOptimizeStrategyHitInfo:;
- (id)convertToJsonString;
- (id)yellowPointSourceType;
- (void)setYellowPointSourceType:;
- (void).cxx_destruct;
+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
