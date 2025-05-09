@interface AWEMusicStreamingImpl.LunaPurchOfferResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString orderID;
@property (nonatomic) NSString pcsOrderID;
@property (nonatomic) q amount;
@property (nonatomic) NSString iapPurchInfo;
@property (nonatomic) q orderStatus;
@property (nonatomic) q orderCreateStatus;
@property (nonatomic) q _orderCreateStatus;
@property (nonatomic) NSArray toPurchOffers;
@property (nonatomic) q currentBalance;
@property (nonatomic) NSString settleType;
- (id)orderID;
- (id)pcsOrderID;
- (void)setPcsOrderID:;
- (id)iapPurchInfo;
- (void)setIapPurchInfo:;
- (long long)orderCreateStatus;
- (void)setOrderCreateStatus:;
- (long long)_orderCreateStatus;
- (id)toPurchOffers;
- (void)setToPurchOffers:;
- (id)settleType;
- (void)setSettleType:;
- (void)setOrderID:;
- (long long)orderStatus;
- (void)setOrderStatus:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)amount;
- (void)setAmount:;
- (long long)currentBalance;
- (void)setCurrentBalance:;
+ (id)toPurchOffersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
