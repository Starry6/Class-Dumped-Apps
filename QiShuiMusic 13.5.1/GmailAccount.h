@interface GmailAccount : IMAPAccount
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostname;
- (void)setPassword:;
- (id)accountStore;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void).cxx_destruct;
- (id)clientToken;
- (id)emailAddressStrings;
- (void)_removeCredential:;
- (id)statisticsKind;
- (BOOL)shouldFetchACEDBInfoForError:;
- (void)persistentAccountDidChange:previousAccount:;
- (unsigned long long)credentialAccessibility;
- (id)preferredAuthScheme;
- (BOOL)shouldEnableAfterError:;
- (BOOL)enableAccount;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:;
- (id)initWithLibrary:persistentAccount:;
- (BOOL)supportsArchiving;
- (int)emptyFrequencyForMailboxType:;
- (BOOL)mustArchiveSentMessages;
- (id)allMailMailboxUid;
- (BOOL)shouldArchiveByDefault;
- (int)archiveDestinationForMailbox:;
- (id)errorForResponse:;
- (id)specialUseAttributeForType:;
- (id)specialUseAttributesForMailbox:;
- (id)displayNameUsingSpecialNamesForMailboxUid:;
- (id)_childOfMailbox:withComponentName:;
- (void)_deleteHook;
- (id)_consumeExistingPreAuthToken;
- (BOOL)supportsFastRemoteBodySearch;
- (id)_webLoginErrorWithURL:;
- (id)_URLFromUncleanString:;
- (BOOL)xListSupportedOnConnection:;
- (id)persistentNameForMailbox:;
+ (id)hostname;
+ (id)accountTypeIdentifier;
+ (id)authSchemesForAccountClass;
+ (BOOL)isPredefinedAccountType;
+ (id)displayedAccountTypeString;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (id)emailAddressHostPart;
+ (BOOL)usernameIsEmailAddress;
+ (id)imapNotEnabledPrefix;
@end
