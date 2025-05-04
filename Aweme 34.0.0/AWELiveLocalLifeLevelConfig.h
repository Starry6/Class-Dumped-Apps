@interface AWELiveLocalLifeLevelConfig : MTLModel
@property (nonatomic) AWELiveLocalLifeComponentLevelConfig componentLevelConfig;
@property (nonatomic) AWELiveLocalLifeAggLevelConfig aggLevelConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentLevelConfig;
- (id)aggLevelConfig;
- (void)setComponentLevelConfig:;
- (void)setAggLevelConfig:;
- (void).cxx_destruct;
+ (id)componentLevelConfigJSONTransformer;
+ (id)aggLevelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
