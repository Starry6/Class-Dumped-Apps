@interface MFHotmailSMTPAccount : SMTPAccount
@property (nonatomic) HotmailAccount mailAccount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostname;
- (id)username;
- (id)password;
- (BOOL)usesSSL;
- (void).cxx_destruct;
- (unsigned int)portNumber;
- (id)oauth2Token;
- (BOOL)shouldFetchACEDBInfoForError:;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (id)displayHostname;
- (BOOL)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (void)setMailAccount:;
+ (id)accountTypeIdentifier;
@end
