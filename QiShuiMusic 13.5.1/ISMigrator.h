@interface ISMigrator : NSObject
@property (nonatomic) Q platform;
@property (nonatomic) NSString previousVersion;
@property (nonatomic) NSString currentVersion;
@property (nonatomic) Q previousSchemaVersion;
@property (nonatomic) BOOL newUserAccount;
- (void)setPlatform:;
- (id)currentVersion;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (void)setCurrentVersion:;
- (id)performMigrationForPreferences:;
- (id)performMigrationForUserPreferences:systemPreferences:;
- (BOOL)previousVersionIsOlderThanMacOS:iOS:watchOS:tvOS:;
- (id)previousVersion;
- (void)setPreviousVersion:;
- (unsigned long long)previousSchemaVersion;
- (void)setPreviousSchemaVersion:;
- (BOOL)newUserAccount;
- (void)setNewUserAccount:;
+ (unsigned long long)currentPlatform;
+ (id)migratorFromVersion:toVersion:;
+ (id)migratorForNewUserAccountWithVersion:;
+ (id)migratorFromVersion:toVersion:platform:;
+ (id)migratorFromVersion:toVersion:platform:newUserAccount:;
+ (id)migratorFromSchemaVersion:;
@end
