@interface IESECGoodsDepositPrice : MTLModel
@property (nonatomic) NSNumber depositPrice;
@property (nonatomic) NSNumber discountMinPrice;
@property (nonatomic) NSNumber discountMaxPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)depositPrice;
- (id)discountMaxPrice;
- (id)discountMinPrice;
- (void)setDepositPrice:;
- (void)setDiscountMaxPrice:;
- (void)setDiscountMinPrice:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
