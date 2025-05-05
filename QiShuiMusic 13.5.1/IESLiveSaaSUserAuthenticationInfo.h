@interface IESLiveSaaSUserAuthenticationInfo : BDDynamicMTLModel
@property (nonatomic) NSString enterpriseVerifyReason;
@property (nonatomic) IESLiveSaaSImage authenticationBadge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapToPbModel;
+ (id)authenticationBadgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
