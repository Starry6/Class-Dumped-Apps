@interface AWEDiscoverDPlayletDetailResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPlayletInfoModel playletModel;
@property (nonatomic) NSString lynxPanelConfigJSON;
@property (nonatomic) NSArray relatedItemTagInfos;
- (id)relatedItemTagInfos;
- (void)setRelatedItemTagInfos:;
- (id)playletModel;
- (void)setPlayletModel:;
- (id)lynxPanelConfigJSON;
- (void)setLynxPanelConfigJSON:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)playletModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
