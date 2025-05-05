@interface MFOSXServerSMTPAccount : SMTPAccount
@property (nonatomic) MFOSXServerIMAPAccount mailAccount;
@property (nonatomic) NSDictionary parentAccountMailProperties;
- (id)hostname;
- (id)username;
- (id)password;
- (BOOL)usesSSL;
- (void).cxx_destruct;
- (unsigned int)portNumber;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (BOOL)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (void)setMailAccount:;
- (id)parentAccountMailProperties;
+ (id)accountTypeIdentifier;
@end
