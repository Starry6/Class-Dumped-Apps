@interface IESECLiveGoodsDepositModel : MTLModel
@property (nonatomic) NSNumber originPrice;
@property (nonatomic) NSNumber depositPrice;
@property (nonatomic) NSString depositDiscountDesc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOriginPrice:;
- (id)depositDiscountDesc;
- (id)depositPrice;
- (id)originPrice;
- (void)setDepositDiscountDesc:;
- (void)setDepositPrice:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
