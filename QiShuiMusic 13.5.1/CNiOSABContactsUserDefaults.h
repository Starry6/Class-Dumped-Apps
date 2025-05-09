@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults
@property (nonatomic) NSMutableDictionary observerCountPerKey;
@property (nonatomic) NSCache valueCache;
@property (nonatomic) CNiOSABContactsUserDefaultsABWrapper abWrapper;
- (void)setLastIgnoredNewDuplicatesCount:;
- (void)removeObserver:forKeyPath:;
- (void)addObserver:forKeyPath:options:context:;
- (long long)sortOrder;
- (void)setDisplayNameOrder:;
- (void)setShortNameFormat:;
- (long long)displayNameOrder;
- (void)flushCache;
- (long long)lastIgnoredNewDuplicatesCount;
- (id)countryCode;
- (id)init;
- (void)dealloc;
- (void)_unregisterObserverForKey:;
- (void)setShortNameFormatEnabled:;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatPrefersNicknames:;
- (BOOL)isShortNameFormatEnabled;
- (id)abWrapper;
- (long long)shortNameFormat;
- (id)observerCountPerKey;
- (id)filteredGroupAndContainerIDs;
- (void)_registerObserverForKey:;
- (void)setFilteredGroupAndContainerIDs:;
- (void)setObserverCountPerKey:;
- (void).cxx_destruct;
- (void)setValueCache:;
- (long long)newContactDisplayNameOrder;
- (id)initWithABWrapper:;
- (id)valueCache;
@end
