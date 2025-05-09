@interface AWEGrouponC2ListDataResponse : AWEBaseApiModel
@property (nonatomic) NSString mob;
@property (nonatomic) q hasMore;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) AWECityModel currentCity;
@property (nonatomic) NSString serverLatency;
@property (nonatomic) NSString deliveryInfo;
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSDictionary mobDict;
@property (nonatomic) NSString feedDebugFilter;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cardList;
- (void)setCardList:;
- (id)deliveryInfo;
- (void)setDeliveryInfo:;
- (id)mobDict;
- (id)feedDebugFilter;
- (void)setMobDict:;
- (void)setFeedDebugFilter:;
- (id)mob;
- (void)setMob:;
- (void)setHasMore:;
- (long long)hasMore;
- (void).cxx_destruct;
- (id)serverLatency;
- (void)setServerLatency:;
- (void)setCurrentCity:;
- (id)currentCity;
+ (id)awemeListJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
