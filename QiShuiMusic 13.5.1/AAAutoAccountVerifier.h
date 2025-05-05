@interface AAAutoAccountVerifier : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (id)init;
- (void)cancel;
- (void)setAccount:;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (BOOL)search:didFindResults:;
- (void)search:didFinishWithError:;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:;
- (void)_verify;
- (void)_validateToken:;
- (void)_resendVerificationEmailForAccount:completion:;
@end
