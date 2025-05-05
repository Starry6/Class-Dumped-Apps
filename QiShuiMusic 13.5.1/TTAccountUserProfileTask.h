@interface TTAccountUserProfileTask : NSObject
+ (id)getRecommendNickNameWithCompletion:;
+ (void)getUserInfoAfterStartUp;
+ (id)p_uploadWithImage:imageName:url:isNeedCompress:extraParams:progress:completion:;
+ (id)startCheckCanSetUserType:completion:;
+ (id)startCheckName:completion:;
+ (id)startCheckSensitiveInfoWithDict:completion:;
+ (id)startCheckUserDefaultInfoWithScene:completion:;
+ (id)startGetConnectedAccountsWithCompletion:;
+ (id)startGetThirdpartUserInfoWithDict:Completion:;
+ (id)startGetUserAuditInfoIgnoreDispatchWithCompletion:;
+ (id)startGetUserAuditInfoIgnoreDispatchWithExtraRequestParams:completion:;
+ (id)startGetUserAuditInfoWithCompletion:;
+ (id)startGetUserInfoForJsonObjWithScene:completion:;
+ (id)startGetUserInfoWithScene:completion:;
+ (id)startUpdateUserExtraProfileWithDict:completion:;
+ (id)startUpdateUserProfileWithDict:completion:;
+ (id)startUploadBgImage:progress:completion:;
+ (id)startUploadCommonImage:isSensitive:isNeedCompress:progress:completion:;
+ (id)startUploadCommonImage:isSensitive:progress:completion:;
+ (id)startUploadImage:progress:completion:;
+ (void)syncCurrentUserInfo:response:;
@end
