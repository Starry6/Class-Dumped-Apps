@interface IESLiveChargeVerifyManager : NSObject
- (void)arouseNewCertifyProcessWithScene:flow:ticket:completionBlock:;
- (void)arouseNewFullAuthCertifyProcessWithScene:flow:ticket:withCompleteBlock:;
- (void)goToVerifyWithSceneCodeString:Completion:;
- (void)showSafeCheckboxViewWithCompletion:;
- (void)showSafeRemindAlertWithCompletion:;
+ (id)sharedManager;
@end
