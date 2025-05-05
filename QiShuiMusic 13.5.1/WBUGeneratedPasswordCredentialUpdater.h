@interface WBUGeneratedPasswordCredentialUpdater : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_performRequest:;
- (void)updateCredentialWithNewUsername:newGeneratedPassword:lastGeneratedPassword:credentialURL:protectionSpace:shouldSaveNewCredential:;
+ (id)sharedUpdater;
@end
