@interface SKPaymentTransactionAuthorizationResponse : NSObject
@property (nonatomic) AKAuthorizationCredential authorizationAppleIDCredential;
@property (nonatomic) NSError accountSignupError;
- (void).cxx_destruct;
- (id)authorizationAppleIDCredential;
- (id)accountSignupError;
- (id)initWithAuthorizationCredential:error:;
@end
