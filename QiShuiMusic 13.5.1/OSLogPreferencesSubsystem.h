@interface OSLogPreferencesSubsystem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray categories;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) q effectiveEnabledLevel;
@property (nonatomic) q effectivePersistedLevel;
@property (nonatomic) q enabledLevel;
@property (nonatomic) q persistedLevel;
- (BOOL)isLocked;
- (void)resetAll;
- (id)initWithName:;
- (void).cxx_destruct;
- (void)reset;
- (id)categories;
- (id)name;
- (long long)enabledLevel;
- (void)setPersistedLevel:;
- (long long)persistedLevel;
- (void)setEnabledLevel:;
- (long long)effectiveEnabledLevel;
- (long long)effectivePersistedLevel;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (long long)_defaultEnabledLevelForCategory:;
- (long long)_defaultPersistedLevelForCategory:;
- (long long)_enabledLevelForCategory:;
- (long long)_persistedLevelForCategory:;
- (BOOL)_signpostEnabledForCategory:;
- (BOOL)_signpostPersistedForCategory:;
- (BOOL)_signpostBacktracesEnabledForCategory:;
- (id)_prefsForCategory:;
- (id)_levelPrefsForCategory:;
- (void)_setEnabledLevel:forCategory:;
- (void)_setPersistedLevel:forCategory:;
- (void)_setSignpostEnabled:forCategory:;
- (void)_setSignpostPersisted:forCategory:;
- (void)_setSignpostBacktracesEnabled:forCategory:;
- (void)_resetCategory:;
@end
