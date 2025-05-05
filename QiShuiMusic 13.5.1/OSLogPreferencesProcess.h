@interface OSLogPreferencesProcess : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) q effectiveEnabledLevel;
@property (nonatomic) q effectivePersistedLevel;
@property (nonatomic) q enabledLevel;
@property (nonatomic) q persistedLevel;
- (BOOL)isLocked;
- (id)initWithBundleID:;
- (void).cxx_destruct;
- (void)reset;
- (id)bundleID;
- (long long)enabledLevel;
- (void)setPersistedLevel:;
- (long long)persistedLevel;
- (void)setEnabledLevel:;
- (id)_levelPrefs;
- (long long)effectiveEnabledLevel;
- (long long)effectivePersistedLevel;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
@end
