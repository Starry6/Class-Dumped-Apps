@interface HTSLiveAuthentication : IESLivePBBaseMessage
@property (nonatomic) NSString verifyContent;
@property (nonatomic) HTSLiveImage authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (nonatomic) NSString enterpriseVerifyReason;
+ (id)descriptor;
@end
