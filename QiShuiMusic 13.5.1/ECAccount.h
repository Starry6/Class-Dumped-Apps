@interface ECAccount : NSObject
@property (nonatomic) ACAccount systemAccount;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) NSDictionary dataclassProperties;
@property (nonatomic) EFLazyCache cache;
@property (nonatomic) NSString identifier;
@property (nonatomic) ACAccountCredential credential;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) NSString accountTypeIdentifier;
@property (nonatomic) NSString accountDescription;
@property (nonatomic) NSString authenticationScheme;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (nonatomic) BOOL configureDynamically;
@property (nonatomic) NSString username;
@property (nonatomic) NSString hostname;
@property (nonatomic) NSString password;
@property (nonatomic) NSString oauthToken;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isAppleAccount;
@property (nonatomic) BOOL isAppleEmployeeAccount;
@property (nonatomic) BOOL isYahooAccount;
@property (nonatomic) BOOL isGmailAccount;
@property (nonatomic) NSString personaIdentifier;
@property (nonatomic) BOOL isPersonaAccount;
@property (nonatomic) BOOL isAuthenticated;
@property (nonatomic) BOOL hasPasswordCredential;
@property (nonatomic) NSArray standardPorts;
@property (nonatomic) NSArray standardSSLPorts;
@property (nonatomic) q defaultPortNumber;
@property (nonatomic) q defaultSecurePortNumber;
@property (nonatomic) q portNumber;
@property (nonatomic) BOOL sslIsDirect;
@property (nonatomic) BOOL sslIsDirectIsSet;
@property (nonatomic) BOOL usesSSL;
@property (nonatomic) NSString accountDirectoryTildeAbbreviatedPath;
@property (nonatomic) q numberOfDaysToKeepTrash;
@property (nonatomic) q numberOfDaysToKeepJunk;
@property (nonatomic) BOOL deleteMessagesInPlace;
@property (nonatomic) NSString draftsMailboxName;
@property (nonatomic) NSString outboxMailboxName;
@property (nonatomic) NSString sentMessagesMailboxName;
@property (nonatomic) NSString trashMailboxName;
@property (nonatomic) NSString junkMailboxName;
@property (nonatomic) NSString notesMailboxName;
@property (nonatomic) NSString toDosMailboxName;
@property (nonatomic) NSString archiveMailboxName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_publicDescription;
- (id)ef_publicDescription;
- (id)hostname;
- (id)standardPorts;
- (BOOL)isAuthenticated;
- (void)setAuthenticationScheme:;
- (BOOL)configureDynamically;
- (void)refresh;
- (void)setPassword:;
- (id)standardSSLPorts;
- (id)username;
- (id)accountStore;
- (void)setOutboxMailboxName:;
- (long long)defaultPortNumber;
- (id)password;
- (void)setHostname:;
- (long long)numberOfDaysToKeepJunk;
- (id)initWithSystemAccount:accountStore:;
- (id)personaIdentifier;
- (id)junkMailboxName;
- (id)_cachedParentAccount;
- (void)setNumberOfDaysToKeepTrash:;
- (id)oauthToken;
- (void)setDeleteMessagesInPlace:;
- (id)identifier;
- (BOOL)isAppleEmployeeAccount;
- (long long)defaultSecurePortNumber;
- (void)setTrashMailboxName:;
- (BOOL)isPersonaAccount;
- (id)initWithSystemAccount:;
- (void)setJunkMailboxName:;
- (BOOL)sslIsDirect;
- (id)portNumberObject;
- (id)credential;
- (id)debugDescription;
- (id)_hostnameFromParentAccount:;
- (BOOL)isAppleAccount;
- (void)renewCredentialsWithOptions:completionHandler:;
- (BOOL)deleteMessagesInPlace;
- (long long)numberOfDaysToKeepTrash;
- (BOOL)usesSSL;
- (BOOL)allowInsecureAuthentication;
- (id)toDosMailboxName;
- (void)setOAuth2Token:refreshToken:;
- (void)setToDosMailboxName:;
- (id)sentMessagesMailboxName;
- (BOOL)setSslIsDirectIsSet;
- (void)setNotesMailboxName:;
- (BOOL)hasPasswordCredential;
- (void)setSystemAccount:;
- (void)clearUsesSSL;
- (id)trashMailboxName;
- (id)properties;
- (void)setDraftsMailboxName:;
- (void).cxx_destruct;
- (void)setUsesSSL:;
- (id)accountDescription;
- (void)setConfigureDynamically:;
- (id)archiveMailboxName;
- (void)setSslIsDirect:;
- (id)dataclassProperties;
- (BOOL)sslIsDirectIsSet;
- (void)setDataClassProperty:forKey:;
- (id)draftsMailboxName;
- (BOOL)isGmailAccount;
- (id)dataClassPropertyForKey:;
- (void)setArchiveMailboxName:;
- (void)setNumberOfDaysToKeepJunk:;
- (id)description;
- (id)outboxMailboxName;
- (long long)portNumber;
- (BOOL)isEnabledForDataclass:;
- (id)usesSSLObject;
- (id)systemAccount;
- (id)cache;
- (void)_accountStoreDidChange:;
- (void)setAccountDirectoryTildeAbbreviatedPath:;
- (id)accountDirectoryTildeAbbreviatedPath;
- (void)setSentMessagesMailboxName:;
- (void)setPortNumber:;
- (BOOL)isYahooAccount;
- (void)clearSSLIsDirect;
- (void)setIsEnabled:;
- (id)notesMailboxName;
- (id)accountTypeIdentifier;
- (void)setAllowInsecureAuthentication:;
- (id)authenticationScheme;
- (BOOL)_cachedEnabled;
- (BOOL)isEnabled;
- (id)enabledDataclasses;
+ (id)standardPorts;
+ (id)standardSSLPorts;
+ (id)log;
@end
