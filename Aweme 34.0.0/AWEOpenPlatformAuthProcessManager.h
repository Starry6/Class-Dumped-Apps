@interface AWEOpenPlatformAuthProcessManager : NSObject
+ (id)commonParamsWithModel:;
+ (void)mergeIdentifyScopeForEntranceModel:;
+ (Class)getDelegateClassFromModel:;
+ (void)tryScanQrcodeWithModel:withCompletion:;
+ (void)requireLoginWithModel:params:withCompletion:;
+ (BOOL)isValidEntranceModel:;
+ (void)realStartAuthWithModel:params:withCompletion:;
+ (void)handleBindMobileNumber:authInfo:params:completion:;
+ (void)gotoSceneAuthOrSlientAuthWithModel:authInfo:params:withCompletion:;
+ (void)silentAuthWithModel:params:authInfo:completion:;
+ (void)requestConfirmIfNeededWithQRToken:xTtPassportAuthState:;
+ (unsigned long long)authSceneFromFlowType:;
+ (void)showFullScreenAuthVCWithModel:flowManager:completion:;
+ (void)showHalfScreenAuthVCWithModel:flowManager:completion:;
+ (void)setupAuthBlockWithFullVC:model:completion:;
+ (void)handleRespFailedWithErrCode:subErrCode:errMsg:originError:model:completion:;
+ (void)handleRespSuccessWithTicket:permissions:model:completion:;
+ (void)startAuthWithModel:withCompletion:;
@end
