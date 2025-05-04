@interface AWEPaymentRepurchaseModel : AWEBaseApiModel
@property (nonatomic) BOOL isRepurchase;
@property (nonatomic) NSArray productInfoList;
@property (nonatomic) AWEProductPriceInfoModel priceInfoModel;
@property (nonatomic) NSString prePayCashierData;
- (id)priceInfoModel;
- (void)setPriceInfoModel:;
- (BOOL)isRepurchase;
- (void)setIsRepurchase:;
- (id)productInfoList;
- (void)setProductInfoList:;
- (id)prePayCashierData;
- (void)setPrePayCashierData:;
- (void).cxx_destruct;
+ (id)priceInfoModelJSONTransformer;
+ (id)productInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
