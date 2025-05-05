@interface AMSCardEnrollmentPaymentSessionTask : AMSTask
+ (void)paymentSessionWithBag:completion:;
+ (id)performPaymentSessionEnrollmentWithBag:;
+ (id)_paymentServiceURLStringForMerchantURL:;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:;
@end
