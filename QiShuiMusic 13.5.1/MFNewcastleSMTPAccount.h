@interface MFNewcastleSMTPAccount : SMTPAccount
@property (nonatomic) CastleIMAPAccount castleAccount;
- (void).cxx_destruct;
- (BOOL)shouldFetchACEDBInfoForError:;
- (id)accountForRenewingCredentials;
- (id)displayHostname;
- (BOOL)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (id)castleAccount;
- (void)setCastleAccount:;
+ (id)accountTypeIdentifier;
@end
