@interface AWEMusicStreamingImpl.LunaCommercePurchOfferResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString orderID;
@property (nonatomic) _TtC21AWEMusicStreamingImpl10LunaIapPay iapPayInfo;
- (id)orderID;
- (id)iapPayInfo;
- (void)setIapPayInfo:;
- (void)setOrderID:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)iapPayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
