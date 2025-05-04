@interface AWEPOIFeedUgcRecommendDishsModel : MTLModel
@property (nonatomic) NSString pageListString;
@property (nonatomic) NSArray recommendDishInfos;
@property (nonatomic) NSDictionary pageListData;
@property (nonatomic) AWEURLModel recFoodIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendDishInfos;
- (id)pageListData;
- (id)recFoodIcon;
- (id)pageListString;
- (void)setPageListData:;
- (void)updateCollectCountWithParams:;
- (void)setRecommendDishInfos:;
- (void)setRecFoodIcon:;
- (void)setPageListString:;
- (void).cxx_destruct;
+ (id)recommendDishInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
