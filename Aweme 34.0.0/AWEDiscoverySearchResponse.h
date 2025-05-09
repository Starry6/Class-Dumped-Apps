@interface AWEDiscoverySearchResponse : AWEBaseApiModel
@property (nonatomic) AWESearchAdModel adModel;
@property (nonatomic) q type;
@property (nonatomic) NSArray userList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) q hasMore;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString correctName;
@property (nonatomic) AWERiskPreventModel riskPreventModel;
@property (nonatomic) AWESearchCorrectModel correctModel;
@property (nonatomic) AWESearchNilInfoModel searchNilInfoModel;
@property (nonatomic) AWESearchNilTextModel searchNilTextModel;
@property (nonatomic) AWEDiscoverySearchExtraModel extraModel;
@property (nonatomic) NSDictionary streamTimeCost;
- (id)extraModel;
- (void)setExtraModel:;
- (id)userList;
- (id)adModel;
- (void)setAdModel:;
- (void)setUserList:;
- (id)riskPreventModel;
- (void)setRiskPreventModel:;
- (id)correctName;
- (void)setCorrectName:;
- (id)correctModel;
- (void)setCorrectModel:;
- (id)searchNilInfoModel;
- (void)setSearchNilInfoModel:;
- (id)searchNilTextModel;
- (void)setSearchNilTextModel:;
- (id)streamTimeCost;
- (void)setStreamTimeCost:;
- (id)cursor;
- (id)userId;
- (void)setHasMore:;
- (long long)hasMore;
- (void)setCursor:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setUserId:;
+ (id)userListJSONTransformer;
+ (id)extraModelJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)correctModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
