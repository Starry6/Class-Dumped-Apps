@interface NEUserNotification : NSObject
- (void)cancel;
- (void).cxx_destruct;
- (id)initAndShowAlertWithHeader:message:alternateMessage:defaultMessage:noBoldDefault:callbackQueue:callbackHandler:;
- (id)initAndShowAuthenticationWithHeader:options:flags:callbackQueue:callbackHandler:;
- (id)initAndShowAddConfigurationsForApp:warningHeader:warning:callbackQueue:callbackHandler:;
- (id)initAndShowLocalNetworkAlertWithAppName:reasonString:callbackQueue:callbackHandler:;
+ (void)cancelCurrentNotificationWithDefaultResponse:queue:completionHandler:;
+ (BOOL)shouldPromptForLocalAuthentication;
+ (void)promptForLocalAuthenticationWithReason:completionQueue:completionHandler:;
@end
