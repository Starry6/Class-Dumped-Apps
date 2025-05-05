@interface IESIMPOIRecommendResponseModel : IESIMBaseApiModel
@property (nonatomic) NSArray poiInfoArray;
@property (nonatomic) BOOL splitDomains;
@property (nonatomic) BOOL isOversea;
@property (nonatomic) IESIMPOIRecommendActivityModel activity;
@property (nonatomic) BOOL hasPostedWithPOIInLatestOneMonth;
@property (nonatomic) BOOL selectFirstRecommend;
@property (nonatomic) NSString hitSelectRule;
- (BOOL)hasPostedWithPOIInLatestOneMonth;
- (id)hitSelectRule;
- (BOOL)isOversea;
- (id)poiInfoArray;
- (BOOL)selectFirstRecommend;
- (void)setHasPostedWithPOIInLatestOneMonth:;
- (void)setHitSelectRule:;
- (void)setIsOversea:;
- (void)setPoiInfoArray:;
- (void)setSelectFirstRecommend:;
- (void)setSplitDomains:;
- (BOOL)splitDomains;
- (void)setActivity:;
- (id)activity;
- (void).cxx_destruct;
+ (id)poiInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
