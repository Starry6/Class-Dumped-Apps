@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
- (void)addBiometricMatchState:;
- (void)addBiometricsState:;
- (void)addClientMetadataForPaymentSheetRequest:;
- (void)addClientMetadataForPurchaseInfo:metricsDictionary:;
- (void)addDualActionSuccess:;
- (void)addUserActions:;
+ (id)_timestamp;
+ (id)dictionaryForBiometricMatchState:didBiometricsLockout:biometricsType:;
+ (id)dictionaryForCancellationEvent:didBiometricsLockout:;
+ (id)dictionaryForUserAction:didBiometricsLockout:;
@end
