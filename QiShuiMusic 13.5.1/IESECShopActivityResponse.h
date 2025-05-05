@interface IESECShopActivityResponse : IESECBaseApiModel
@property (nonatomic) IESECRelationActivityDynamicModel activityDynamicModel;
@property (nonatomic) NSString extraSchema;
@property (nonatomic) NSDictionary floatSchemes;
@property (nonatomic) NSArray marqueeModels;
@property (nonatomic) NSArray multiMarqueeModels;
- (void)setExtraSchema:;
- (id)activityDynamicModel;
- (id)extraSchema;
- (id)floatSchemes;
- (id)marqueeModels;
- (id)multiMarqueeModels;
- (void)setActivityDynamicModel:;
- (void)setFloatSchemes:;
- (void)setMarqueeModels:;
- (void)setMultiMarqueeModels:;
- (void).cxx_destruct;
+ (id)marqueeModelsJSONTransformer;
+ (id)multiMarqueeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
