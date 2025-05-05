@interface IESLiveSaaSAdminedUserInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel user;
@property (nonatomic) IESLiveSaaSUserModel operateUser;
@property (nonatomic) double operateTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)operaterJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
