@interface IESECDiscountPrice : MTLModel
@property (nonatomic) NSNumber discountPrice;
@property (nonatomic) NSString discountPrefix;
@property (nonatomic) NSString discountSuffix;
@property (nonatomic) NSNumber discountMinPrice;
@property (nonatomic) NSNumber discountMaxPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)discountMaxPrice;
- (id)discountMinPrice;
- (id)discountPrefix;
- (id)discountPrice;
- (id)discountSuffix;
- (void)setDiscountMaxPrice:;
- (void)setDiscountMinPrice:;
- (void)setDiscountPrefix:;
- (void)setDiscountPrice:;
- (void)setDiscountSuffix:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
