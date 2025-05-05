@interface AMSCardEnrollmentEligibilityTask : AMSTask
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString countryCode;
- (id)countryCode;
- (id)init;
- (id)initWithBag:;
- (void)setBag:;
- (id)initWithCountryCode:;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:countryCode:;
- (void)canWriteBillingInfoWithPassTypeIdentifier:serialNumber:completion:;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:serialNumber:;
- (unsigned long long)_cardTypeForPassTypeIdentifier:serialNumber:;
- (id)_performSilentEnrollmentCheckWithRequest:;
@end
