@interface AWEIMBridge : NSObject
+ (void)enterIMMessageVCFromReportWithRequestParams:completionBlock:;
+ (void)sendGroupInviteCardToChatWithParams:completionBlock:;
+ (void)tryIMPanelShareWithParams:shareCompletion:;
+ (void)getIMShareContactListWithParams:completion:;
+ (void)__transferToSendMsgPanelWithParams:shareCompletion:;
+ (id)__errorWithErrorType:;
@end
