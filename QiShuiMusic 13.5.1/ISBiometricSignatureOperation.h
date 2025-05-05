@interface ISBiometricSignatureOperation : ISOperation
@property (nonatomic) ISBiometricStore biometricStore;
@property (nonatomic) SSBiometricAuthenticationContext context;
@property (nonatomic) ISDialog fallbackDialog;
@property (nonatomic) ISTouchIDDialog touchIDDialog;
@property (nonatomic) @? outputBlock;
- (id)context;
- (id)outputBlock;
- (void)setOutputBlock:;
- (void)run;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithBiometricAuthenticationContext:touchIDDialog:fallbackDialog:;
- (BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:accountName:;
- (id)biometricStore;
- (void)setBiometricStore:;
- (id)fallbackDialog;
- (void)setFallbackDialog:;
- (id)touchIDDialog;
- (void)setTouchIDDialog:;
@end
