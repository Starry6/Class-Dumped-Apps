@interface CNContactsUserDefaultsX : CNContactsUserDefaults
@property (nonatomic) CNFoundationUserDefaults foundationUserDefaults;
- (long long)sortOrder;
- (void)setDisplayNameOrder:;
- (void)setShortNameFormat:;
- (long long)displayNameOrder;
- (id)countryCode;
- (id)init;
- (id)initWithFoundationUserDefaults:;
- (void)setFoundationUserDefaults:;
- (void)setShortNameFormatEnabled:;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatPrefersNicknames:;
- (BOOL)isShortNameFormatEnabled;
- (long long)shortNameFormat;
- (id)filteredGroupAndContainerIDs;
- (id)foundationUserDefaults;
- (void)setFilteredGroupAndContainerIDs:;
- (void).cxx_destruct;
- (long long)newContactDisplayNameOrder;
@end
