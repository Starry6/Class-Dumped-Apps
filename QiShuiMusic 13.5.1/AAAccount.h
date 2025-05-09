@interface AAAccount : NSObject
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString fmipToken;
@property (nonatomic) NSString password;
@property (nonatomic) NSString username;
@property (nonatomic) NSString personID;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString primaryEmail;
@property (nonatomic) NSArray appleIDAliases;
@property (nonatomic) BOOL primaryAccount;
@property (nonatomic) BOOL primaryEmailVerified;
@property (nonatomic) BOOL needsEmailConfiguration;
@property (nonatomic) BOOL needsRegistration;
@property (nonatomic) BOOL serviceUnavailable;
@property (nonatomic) NSDictionary serviceUnavailableInfo;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet provisionedDataclasses;
@property (nonatomic) NSSet enabledDataclasses;
@property (nonatomic) NSString accountDescription;
@property (nonatomic) NSString accountFooterText;
@property (nonatomic) NSDictionary accountFooterButton;
@property (nonatomic) NSDictionary accountFirstDisplayAlert;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSDictionary dataclassProperties;
@property (nonatomic) NSString syncStoreIdentifier;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (nonatomic) NSArray supportedDataclasses;
@property (nonatomic) NSInteger accountServiceType;
- (id)account;
- (id)protocolVersion;
- (id)authToken;
- (void)setAuthToken:;
- (BOOL)needsRegistration;
- (void)setPassword:;
- (BOOL)needsEmailConfiguration;
- (id)username;
- (id)init;
- (void)setUseCellular:forDataclass:;
- (void)setNeedsToVerifyTerms:;
- (id)password;
- (void)notifyUserOfQuotaDepletion;
- (void)setPrimaryAccount:;
- (BOOL)isProvisionedForDataclass:;
- (void)setUsername:;
- (id)identifier;
- (id)personID;
- (id)_mailChildAccount;
- (id)firstName;
- (id)propertiesForDataclass:;
- (id)_childAccounts;
- (id)accountFooterText;
- (id)lastName;
- (BOOL)primaryAccount;
- (void)saveFMIPTokenInKeychain;
- (void)setupChildMailAccountAndEnable:withEmail:;
- (BOOL)needsToVerifyTerms;
- (id)accountFooterButton;
- (id)appleIDAliases;
- (BOOL)primaryEmailVerified;
- (void)setAccountDescription:;
- (void)removePasswordFromKeychain;
- (id)displayName;
- (void)setFmipToken:;
- (id)primaryEmail;
- (void)removeTokensFromKeychain;
- (BOOL)serviceUnavailable;
- (id)fmipToken;
- (void)renewCredentialsForAppleIDWithHandler:;
- (void)savePasswordInKeychain;
- (void)flushCachedPassword;
- (void)presentQuotaDepletionAlertForDataclass:withHandler:;
- (id)syncStoreIdentifier;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:withHandler:;
- (int)accountServiceType;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:;
- (void).cxx_destruct;
- (id)accountPropertyForKey:;
- (void)saveTokensInKeychain;
- (id)accountDescription;
- (id)dataclassProperties;
- (id)serviceUnavailableInfo;
- (int)mobileMeAccountStatus;
- (void)presentQuotaDepletionAlertForDataclass:;
- (void)setAccountProperty:forKey:;
- (BOOL)isEnabledForDataclass:;
- (id)accountFirstDisplayAlert;
- (id)initWithAccount:;
- (void)authenticateWithHandler:;
- (void)updateAccountWithProvisioningResponse:;
- (void)setEnabled:forDataclass:;
- (id)supportedDataclasses;
- (void)flushCachedTokens;
- (id)initWithAccountIdentifier:;
- (id)provisionedDataclasses;
- (BOOL)useCellularForDataclass:;
- (void)updateAccountPropertiesWithHandler:;
- (id)enabledDataclasses;
+ (id)accountTypeString;
@end
