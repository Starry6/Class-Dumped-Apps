@interface AWELiveLocalLifeComponentIconAnimationInfo : MTLModel
@property (nonatomic) NSString animationKey;
@property (nonatomic) AWEURLModel dynamicIconUrl;
@property (nonatomic) AWELiveLocalLifeComponentIconAnimationStrategy animationStrategy;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setAnimationKey:;
- (id)dynamicIconUrl;
- (id)animationStrategy;
- (void)setDynamicIconUrl:;
- (void)setAnimationStrategy:;
- (void).cxx_destruct;
- (id)animationKey;
+ (id)dynamicIconUrlJSONTransformer;
+ (id)animationStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
