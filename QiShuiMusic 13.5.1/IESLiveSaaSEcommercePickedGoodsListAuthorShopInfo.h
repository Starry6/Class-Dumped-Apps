@interface IESLiveSaaSEcommercePickedGoodsListAuthorShopInfo : BDDynamicMTLModel
@property (nonatomic) NSString shopName;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSArray shopTags;
@property (nonatomic) IESLiveSaaSECommercePickedGoodsListAuthorReputationModel shopReputation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)shopTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
