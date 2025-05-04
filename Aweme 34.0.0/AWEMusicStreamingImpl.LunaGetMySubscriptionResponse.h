@interface AWEMusicStreamingImpl.LunaGetMySubscriptionResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl12LunaSubsInfo subsInfo;
@property (nonatomic) _TtC21AWEMusicStreamingImpl36LunaFreeSubscriberActivityDetailInfo freeSubscriberActivity;
@property (nonatomic) NSArray toPurchOffers;
@property (nonatomic) BOOL allowDidPurch;
- (id)toDic;
- (id)subsInfo;
- (void)setSubsInfo:;
- (id)freeSubscriberActivity;
- (void)setFreeSubscriberActivity:;
- (BOOL)allowDidPurch;
- (void)setAllowDidPurch:;
- (id)toPurchOffers;
- (void)setToPurchOffers:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)freeSubscriberActivityJSONTransformer;
+ (id)subsInfoJSONTransformer;
+ (id)toPurchOffersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
