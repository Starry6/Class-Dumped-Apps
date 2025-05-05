@interface IESLiveSaaSPBUser_AuthenticationInfo : GPBMessage
@property (nonatomic) NSString customVerify;
@property (nonatomic) NSString enterpriseVerifyReason;
@property (nonatomic) IESLiveSaaSPBImage authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (nonatomic) GPBInt32Array levelListArray;
@property (nonatomic) Q levelListArray_Count;
@property (nonatomic) IESLiveSaaSPBUser_AuthenticationInfo_AccountTypeInfo accountTypeInfo;
@property (nonatomic) BOOL hasAccountTypeInfo;
+ (id)descriptor;
@end
