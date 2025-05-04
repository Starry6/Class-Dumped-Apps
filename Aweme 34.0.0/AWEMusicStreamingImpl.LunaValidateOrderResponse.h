@interface AWEMusicStreamingImpl.LunaValidateOrderResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString orderID;
@property (nonatomic) q orderStatus;
@property (nonatomic) q _orderStatus;
@property (nonatomic) q productType;
@property (nonatomic) _TtC21AWEMusicStreamingImpl17LunaAlbumResponse album;
@property (nonatomic) _TtC21AWEMusicStreamingImpl10LunaAssets assets;
- (id)orderID;
- (void)setOrderID:;
- (long long)orderStatus;
- (void)setOrderStatus:;
- (long long)_orderStatus;
- (long long)productType;
- (id)initWithDictionary:error:;
- (void)setProductType:;
- (id)init;
- (id)assets;
- (void)setAssets:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)album;
+ (id)assetsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)albumJSONTransformer;
@end
