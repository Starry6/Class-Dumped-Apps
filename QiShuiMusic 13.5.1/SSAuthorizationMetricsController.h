@interface SSAuthorizationMetricsController : NSObject
+ (id)authorizationDialogEventForParameters:;
+ (id)dialogIdForMetricsDictionary:;
+ (id)userActionDictionaryForBiometricMatchState:didBiometricsLockout:;
+ (id)userActionDictionaryForUserAction:didBiometricsLockout:;
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:buyParams:matchState:topicName:userAgent:;
+ (id)_dialogEventForBiometricOptInWithResult:message:topicName:userAgent:error:;
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:buyParams:topicName:userAgent:;
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:error:;
+ (id)_clientIdForMetrics;
+ (id)_clientIDForAccount:orUserID:;
+ (id)_mtTopicForBuyParams:;
@end
