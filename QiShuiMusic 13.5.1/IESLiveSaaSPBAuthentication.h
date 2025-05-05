@interface IESLiveSaaSPBAuthentication : GPBMessage
@property (nonatomic) NSString verifyContent;
@property (nonatomic) IESLiveSaaSPBImage authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (nonatomic) NSString enterpriseVerifyReason;
+ (id)descriptor;
@end
