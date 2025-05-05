@interface WBSSavedAccountMatchCriteria : NSObject
@property (nonatomic) Q options;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString partialUsername;
@property (nonatomic) WBSAutoFillAssociatedDomainsManager associatedDomainsManager;
@property (nonatomic) WBSGlobalFrameIdentifier webFrameIdentifier;
@property (nonatomic) BOOL queryShouldOmitAutoFillPasskeyMatches;
@property (nonatomic) BOOL queryShouldReturnSavedAccountsMatchingHighLevelDomainAndSimplifiedDomainOfURL;
@property (nonatomic) BOOL queryShouldReturnSavedAccountsMatchingAssociatedDomainsOfURL;
@property (nonatomic) BOOL queryShouldReturnSavedAccountsWithEmptyUsernames;
@property (nonatomic) NSSet associatedDomainsForURL;
- (void)setOptions:;
- (void)setAssociatedDomainsManager:;
- (id)associatedDomainsManager;
- (unsigned long long)options;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (id)initWithURL:options:partialUsername:associatedDomainsManager:webFrameIdentifier:;
- (id)webFrameIdentifier;
- (id)partialUsername;
- (BOOL)queryShouldReturnSavedAccountsMatchingHighLevelDomainAndSimplifiedDomainOfURL;
- (BOOL)queryShouldReturnSavedAccountsMatchingAssociatedDomainsOfURL;
- (BOOL)queryShouldReturnSavedAccountsWithEmptyUsernames;
- (BOOL)queryShouldOmitAutoFillPasskeyMatches;
- (id)associatedDomainsForURL;
- (void)setPartialUsername:;
+ (id)criteriaForExactFQDNPasswordMatchesOfURL:;
@end
