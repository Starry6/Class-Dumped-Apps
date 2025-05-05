@interface IESLiveSaaSBalanceCouponModel : BDDynamicMTLModel
@property (nonatomic) NSNumber benefitType;
@property (nonatomic) NSDictionary identity;
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString category;
@property (nonatomic) IESLiveSaaSBalanceCouponExchangeInfo exchangeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)exchangeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
