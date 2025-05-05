@interface TTAccountAuthCallbackTask : NSObject
+ (id)shareAppToSNSPlatform:completedBlock:;
+ (id)startSNSSDKAuthSwitchBindWithReq:trackParams:completedBlock:;
+ (id)startSNSSDKSSOAuthBindThirdPlatformCallbackWithParams:completedBlock:;
+ (id)startSNSSDKSSOAuthCallbackCombineWithRequestReason:params:completion:;
+ (id)startSNSSDKSSOAuthCallbackCombineWithRequestReason:params:trackParams:completion:;
+ (id)startSNSSDKSSOAuthCallbackWithParams:completedBlock:;
+ (id)startSNSSDKSSOAuthCallbackWithRequestReason:params:completedBlock:;
+ (id)startSNSSDKSSOAuthCallbackWithRequestReason:params:trackParams:completedBlock:;
+ (id)startSNSSDKSSOAuthLoginCallbackWithParams:completedBlock:;
+ (id)startSNSSDKSSOAuthLoginOnlyCallbackWithParams:completedBlock:;
+ (id)startSNSSDKSSOAuthShareUserInfoCallbackWithParams:completedBlock:;
+ (id)startWAPAuthSwitchBindWithReq:completedBlock:;
@end
