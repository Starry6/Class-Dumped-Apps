@interface AMSCardRegistrationTask : AMSTask
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString merchantIdentifier;
- (void)setCountryCode:;
- (id)countryCode;
- (void).cxx_destruct;
- (id)initWithCountryCode:merchantIdentifier:;
- (id)performCardRegistration;
- (id)_performCardRegistration;
- (id)merchantIdentifier;
- (void)setMerchantIdentifier:;
@end
