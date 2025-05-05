@interface IESLiveSaaSVerifyCertificationModel : BDDynamicMTLModel
@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL reviewing;
@property (nonatomic) NSInteger certificationStep;
@property (nonatomic) NSString certID;
@property (nonatomic) NSString realName;
@property (nonatomic) NSInteger hotsoonCertificationStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
