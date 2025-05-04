@interface AWERepurchaseProductInfoModel : AWEBaseApiModel
@property (nonatomic) NSString productID;
@property (nonatomic) NSString skuID;
@property (nonatomic) NSNumber purchaseQuantity;
- (id)skuID;
- (void)setSkuID:;
- (id)purchaseQuantity;
- (void)setPurchaseQuantity:;
- (void)setProductID:;
- (id)productID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
