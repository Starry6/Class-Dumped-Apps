@interface OSLogPreferencesManager : NSObject
@property (nonatomic) NSArray processes;
@property (nonatomic) NSArray subsystems;
@property (nonatomic) q enabledLevel;
@property (nonatomic) q persistedLevel;
- (id)init;
- (void)resetAll;
- (id)processes;
- (void).cxx_destruct;
- (void)reset;
- (id)subsystems;
- (long long)enabledLevel;
- (void)setPersistedLevel:;
- (long long)persistedLevel;
- (void)setEnabledLevel:;
- (id)_levelPrefs;
- (void)resetAllProcesses;
- (void)resetAllSubsystems;
+ (id)sharedManager;
@end
