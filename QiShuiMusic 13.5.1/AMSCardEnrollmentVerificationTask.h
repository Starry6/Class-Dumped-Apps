@interface AMSCardEnrollmentVerificationTask : AMSTask
+ (id)_performSilentEnrollmentPaymentSessionWithContext:;
+ (void)verifyPayment:isDefault:completion:;
+ (void)verifyPayment:isDefault:bag:completion:;
+ (id)performPaymentVerificationForPayment:isDefault:;
+ (id)performPaymentVerificationForPayment:isDefault:bag:;
@end
