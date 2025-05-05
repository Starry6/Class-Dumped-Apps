@interface AMSCardEnrollment : NSObject
+ (id)paymentServicesMerchantURL;
+ (BOOL)beginCardEnrollmentAttemptWithBag:account:;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:buyParams:purchaseResult:;
+ (BOOL)shouldAttemptApplePayClassicWithBag:accessControlRef:;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:accessControlRef:;
+ (BOOL)shouldUseApplePayClassicWithBag:;
+ (BOOL)shouldUseAutoEnrollmentWithBag:;
+ (void)updateAutoEnrollmentIdentifier;
+ (BOOL)shouldAttemptAutoEnrollment;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:paymentNetworks:accessControlRef:;
+ (BOOL)shouldAttemptAutoEnrollmentWithCountryCode:;
+ (BOOL)shouldUseAutoEnrollmentWithPercentage:sessionDuration:;
+ (id)_cardEligibilityStatusForCountryCode:;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayWithCountryCode:paymentNetworks:;
@end
