@interface MFIMAPResponse : NSObject
@property (nonatomic) MFIMAPResponseConsumer responseConsumer;
@property (nonatomic) NSArray privateNamespaces;
@property (nonatomic) NSArray publicNamespaces;
@property (nonatomic) NSArray sharedNamespaces;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (id)tag;
- (void)setCapabilities:;
- (void)setValue:forKey:;
- (void)dealloc;
- (unsigned long long)number;
- (id)capabilities;
- (id)extraAttributes;
- (id)mailboxName;
- (id)initWithString:;
- (id)searchResults;
- (int)responseCode;
- (id)keyValuePairs;
- (void)setSearchResults:;
- (void)setNumber:;
- (id)parameters;
- (void)setTag:;
- (id)fetchResults;
- (id)description;
- (void)setResponseConsumer:;
- (id)responseConsumer;
- (id)userData;
- (void)setFlags:;
- (void)setServerInfo:;
- (id)flags;
- (id)responseName;
- (id)serverInfo;
- (id)separator;
- (int)responseType;
- (id)responseInfo;
- (id)uids;
- (void)setResponseType:;
- (BOOL)isUntagged;
- (BOOL)isAlertResponse;
- (BOOL)isResponseWithCode:;
- (id)userString;
- (void)setUserData:responseCode:responseInfo:;
- (id)statusEntries;
- (void)setMailboxName:statusEntries:;
- (unsigned long long)mailboxAttributes;
- (void)setMailboxAttributes:separator:mailboxName:extraAttributes:;
- (id)fetchResultWithType:;
- (void)setFetchResults:;
- (id)quotaRootNames;
- (void)setMailboxName:quotaRootNames:;
- (id)quotaRootName;
- (id)quotas;
- (void)setQuotaRootName:quotas:;
- (int)uidFlagsChange;
- (void)setUidFlagsChange:;
- (void)setUids:;
- (id)flagsFetchResult;
- (void)setFlagsFetchResult:;
- (id)privateNamespaces;
- (void)setPrivateNamespaces:;
- (id)publicNamespaces;
- (void)setPublicNamespaces:;
- (id)sharedNamespaces;
- (void)setSharedNamespaces:;
- (void)setResponseName:parameters:;
- (id)_descriptionWithFullData:;
- (id)initWithConnection:responseConsumer:;
- (id)initWithResponseType:;
@end
