@interface FARequestConfigurator : NSObject
@property (nonatomic) BOOL attachSetupHeader;
@property (nonatomic) AKAppleIDAuthenticationContext authContext;
- (id)_serviceOwnersManager;
- (id)_account;
- (void)setAuthContext:;
- (id)_grandSlamSigner;
- (id)_accountStore;
- (id)authContext;
- (void).cxx_destruct;
- (void)renewCredentialsWithCompletion:;
- (id)initWithAccount:;
- (id)_authContext;
- (id)_grandSlamAccount;
- (id)_familyGrandSlamSigner;
- (void)addFresnoHeadersToRequest:withCompletion:;
- (void)addFresnoHeadersToRequest:;
- (void)pushTokenWithCompletion:;
- (void)addFresnoPayloadToRequest:additionalPayload:;
- (void)addPayload:toRequest:;
- (id)_akSigningController;
- (void)_resourceLoadDelegate:;
- (id)_fresnoPayloadWithAdditionalPayload:;
- (void)_addAccountForServiceType:toPayload:forKey:;
- (id)_familyTokenForGrandSlamAccount:andTokenID:;
- (BOOL)attachSetupHeader;
- (void)setAttachSetupHeader:;
@end
