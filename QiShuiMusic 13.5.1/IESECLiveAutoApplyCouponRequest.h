@interface IESECLiveAutoApplyCouponRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString productID;
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString shopID;
@property (nonatomic) NSString price;
- (void)setPromotionID:;
- (id)buildParams;
- (id)promotionID;
- (void)setShopID:;
- (id)shopID;
- (id)productID;
- (void)setProductID:;
- (void).cxx_destruct;
- (id)price;
- (void)setPrice:;
@end
