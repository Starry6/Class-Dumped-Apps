@interface IESLiveChargeModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString iapId;
@property (nonatomic) NSNumber productId;
@property (nonatomic) NSString describe;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSNumber exchangePrice;
@property (nonatomic) NSNumber diamondCount;
@property (nonatomic) NSNumber givingCount;
@property (nonatomic) NSNumber discountPrice;
@property (nonatomic) SKProduct product;
@property (nonatomic) IESLiveImage productImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productImage;
- (void)setProductImage:;
- (id)dictionary;
- (id)initWithDictionary:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)product;
- (void)setProduct:;
+ (id)JSONKeyPathsByPropertyKey;
@end
