@interface CNContactsUserDefaults : NSObject
@property (nonatomic) q displayNameOrder;
@property (nonatomic) q shortNameFormat;
@property (nonatomic) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (nonatomic) q sortOrder;
@property (nonatomic) NSString countryCode;
- (void)setLastIgnoredNewDuplicatesCount:;
- (long long)sortOrder;
- (void)setDisplayNameOrder:;
- (void)setShortNameFormat:;
- (long long)displayNameOrder;
- (long long)lastIgnoredNewDuplicatesCount;
- (id)countryCode;
- (id)init;
- (void)setShortNameFormatEnabled:;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatPrefersNicknames:;
- (BOOL)isShortNameFormatEnabled;
- (long long)shortNameFormat;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:;
- (long long)newContactDisplayNameOrder;
- (id)changeNotificationName;
+ (id)sharedDefaults;
+ (void)flushSharedInstance;
@end
