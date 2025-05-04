@interface AWEMusicStreamingImpl.LunaValidatePurchResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString orderID;
@property (nonatomic) q orderStatus;
@property (nonatomic) q _orderStatus;
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaOrderInfo orderInfo;
@property (nonatomic) _TtC21AWEMusicStreamingImpl18LunaSubscriberInfo subscriberInfo;
@property (nonatomic) _TtC21AWEMusicStreamingImpl18LunaSettleItemInfo SettleItem;
- (id)orderID;
- (void)setOrderID:;
- (long long)orderStatus;
- (void)setOrderStatus:;
- (long long)_orderStatus;
- (id)orderInfo;
- (void)setOrderInfo:;
- (id)subscriberInfo;
- (void)setSubscriberInfo:;
- (id)SettleItem;
- (void)setSettleItem:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)orderInfoJSONTransformer;
+ (id)subscriberInfoJSONTransformer;
+ (id)SettleItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
