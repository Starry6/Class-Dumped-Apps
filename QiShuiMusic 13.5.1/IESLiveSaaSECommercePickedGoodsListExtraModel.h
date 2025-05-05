@interface IESLiveSaaSECommercePickedGoodsListExtraModel : BDDynamicMTLModel
@property (nonatomic) NSString couponGuide;
@property (nonatomic) NSString hasShield;
@property (nonatomic) NSString shieldTitle;
@property (nonatomic) NSArray shieldNotice;
@property (nonatomic) NSNumber reputationScore;
@property (nonatomic) NSNumber reputationPercetage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)shieldNoticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
