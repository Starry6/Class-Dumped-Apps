@interface HTSLiveUser_AuthenticationInfo : IESLivePBBaseMessage
@property (nonatomic) NSString customVerify;
@property (nonatomic) NSString enterpriseVerifyReason;
@property (nonatomic) HTSLiveImage authenticationBadge;
@property (nonatomic) BOOL hasAuthenticationBadge;
@property (nonatomic) GPBInt32Array levelListArray;
@property (nonatomic) Q levelListArray_Count;
@property (nonatomic) HTSLiveUser_AuthenticationInfo_AccountTypeInfo accountTypeInfo;
@property (nonatomic) BOOL hasAccountTypeInfo;
+ (id)descriptor;
@end
