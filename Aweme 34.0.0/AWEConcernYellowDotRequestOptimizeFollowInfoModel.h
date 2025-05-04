@interface AWEConcernYellowDotRequestOptimizeFollowInfoModel : AWEBaseApiModel
@property (nonatomic) NSString followYellowPointSourceType;
@property (nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel optimizeStrategyHitInfo;
- (id)followYellowPointSourceType;
- (void)setFollowYellowPointSourceType:;
- (id)optimizeStrategyHitInfo;
- (void)setOptimizeStrategyHitInfo:;
- (void).cxx_destruct;
+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
