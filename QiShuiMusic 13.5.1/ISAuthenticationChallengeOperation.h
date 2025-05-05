@interface ISAuthenticationChallengeOperation : ISDialogOperation
@property (nonatomic) NSURLCredential credential;
@property (nonatomic) ISAuthenticationChallenge challenge;
- (void)setChallenge:;
- (void)dealloc;
- (id)credential;
- (void)run;
- (id)challenge;
- (void)setCredential:;
- (void)handleButtonSelected:withResponseDictionary:;
- (id)_copyCredentialForSignInResponseDictionary:;
+ (id)operationWithChallenge:;
@end
