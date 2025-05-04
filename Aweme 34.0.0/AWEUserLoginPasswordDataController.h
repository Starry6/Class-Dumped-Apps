@interface AWEUserLoginPasswordDataController : AWEUserLoginBaseDataController
@property (nonatomic) DYPhoneNumberModel phoneNumber;
@property (nonatomic) NSString password;
- (void)handleSuccess;
- (void)handleError:ticket:;
- (void)showTooMantTriesAlert:;
- (void)showForgetPassword:;
- (void)requestLoginPhoneNumberModel:password:;
- (id)password;
- (void)setPassword:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
@end
