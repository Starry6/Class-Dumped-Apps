@interface AWETeenProfileEditSubmitManager : NSObject
+ (void)submitEditInformationWithParams:completion:;
+ (void)submitEditInformationWithParams:showLoadingView:completion:;
+ (void)updateDeviceWithParams:completion:;
+ (void)submitEditImageWithParams:completion:;
+ (void)uploadImage:type:completionBlock:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:ifChangeImage:completion:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:ifChangeImage:showLoadingView:completion:;
+ (void)updateSecurityStartForScene;
+ (long long)checkIDIfValid:showToast:;
+ (id)badWordsErrorTips;
+ (void)updateUserProfileWithToastAndReturnPageIfNeeded:completion:;
+ (void)updateUserProfileWithToastAndReturnPageIfNeededWithoutSync:completion:;
+ (id)checkInvalidCharacterToastText;
+ (id)idCheckAllNumbersToastText;
+ (void)platformCheckResult:checkResult:toastContent:;
+ (void)uploadImage:params:completion:;
+ (void)uploadImageWithType:image:webpPath:params:completion:;
+ (void)updateUserProfileWithParameter:needSync:completion:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:completion:dismissLoadingView:;
+ (void)uploadWebpImage:params:completion:;
+ (void)updateUserProfile:completion:;
+ (void)updateDeviceAgeWithAge:completion:;
@end
