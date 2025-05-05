@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString generatedPassword;
@property (nonatomic) NSString lastGeneratedPassword;
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) NSURL urlForCredential;
@property (nonatomic) BOOL shouldSaveNewCredential;
- (id)username;
- (id)protectionSpace;
- (void).cxx_destruct;
- (id)generatedPassword;
- (id)_initRequestWithNewUsername:newGeneratedPassword:lastGeneratedPassword:credentialURL:protectionSpace:shouldSaveNewCredential:;
- (id)lastGeneratedPassword;
- (id)urlForCredential;
- (BOOL)shouldSaveNewCredential;
+ (id)requestWithNewUsername:newGeneratedPassword:lastGeneratedPassword:credentialURL:protectionSpace:shouldSaveNewCredential:;
@end
