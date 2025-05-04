@interface AWEPOIAIRecommendResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray poiList;
@property (nonatomic) NSString awemePOITag;
- (void)setPoiList:;
- (id)poiList;
- (id)awemePOITag;
- (void)setAwemePOITag:;
- (void).cxx_destruct;
+ (id)poiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
