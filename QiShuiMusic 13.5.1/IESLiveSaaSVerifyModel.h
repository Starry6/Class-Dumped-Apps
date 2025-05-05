@interface IESLiveSaaSVerifyModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSVerifyMobileVerifyModel mobileVerifyData;
@property (nonatomic) IESLiveSaaSVerifyCertificationModel certData;
@property (nonatomic) IESLiveSaaSVerifyAntiSpamModel antiSpamData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)mobileVerifyDataJSONTransformer;
+ (id)antiSpamDataJSONTransformer;
+ (id)certDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
