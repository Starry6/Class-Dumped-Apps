@interface AWEProfileEditSubmitManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)submitEditInformationWithParams:completion:;
+ (void)submitEditInformationWithContext:completion:;
+ (void)uploadImage:type:completionBlock:errorBlock:;
+ (void)submitEditImageWithParams:completion:;
+ (void)uploadImage:type:completionBlock:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:ifChangeImage:completion:;
+ (void)updateSecurityStartForScene;
+ (long long)checkIDIfValid:showToast:;
+ (id)badWordsErrorTips;
+ (id)checkInvalidCharacterToastText;
+ (id)idCheckAllNumbersToastText;
+ (void)platformCheckResult:checkResult:toastContent:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:completion:dismissLoadingView:;
+ (void)p_noNetActionForSubmitWithContext:completion:;
+ (void)p_errorActionForSubmitWithParams:completion:;
+ (void)p_successActionForSubmitWithParams:completion:;
+ (void)p_showAlertForHighRiskOccupationWithDialogModel:context:model:toastBackInfo:completion:;
+ (void)submitEditImageWithParams:complexCompletion:;
+ (void)submitEditInformationWithParams:ifChangeUniqueID:completion:;
+ (BOOL)checkEnableEditUniqueID:;
@end
