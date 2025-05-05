@interface ISRootMigrator : ISMigrator
@property (nonatomic) BOOL isErase;
@property (nonatomic) BOOL isRestoreFromBackup;
- (BOOL)performMigration;
- (BOOL)isRestoreFromBackup;
- (id)performMigrationForPreferences:;
- (id)performMigrationForUserPreferences:systemPreferences:;
- (void)updateAppleLanguagesSchemaVersionToCurrent;
- (id)appendRegionalVariantsToLanguageIdentifiers:regionCode:;
- (id)importPreferredLanguagesForPreferences:;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:;
- (BOOL)isErase;
- (void)setIsErase:;
- (void)setIsRestoreFromBackup:;
@end
