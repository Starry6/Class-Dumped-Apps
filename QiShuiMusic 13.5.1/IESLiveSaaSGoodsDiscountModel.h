@interface IESLiveSaaSGoodsDiscountModel : BDDynamicMTLModel
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) NSNumber applyCoupon;
@property (nonatomic) NSArray discountTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)discountTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
