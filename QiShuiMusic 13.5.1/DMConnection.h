@interface DMConnection : NSObject
- (id)init;
- (void)deferExit;
- (void)dealloc;
- (void)cancelDeferredExit;
- (void)changeVisibility:completion:;
- (id)migrationPhaseDescription;
- (void)reportMigrationFailure;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:;
- (long long)migrateCheckingNecessity:lastRelevantPlugin:testMigrationInfrastructureOnly:;
- (id)userDataDispositionAuxiliaryData;
- (void)testMigrationUIWithProgress:forceInvert:;
- (BOOL)isMigrationNeeded;
- (unsigned int)userDataDisposition;
- (void).cxx_destruct;
- (id)previousBuildVersion;
- (void)migrationPluginResults:;
- (id)orderedPluginIdentifiers;
+ (id)connection;
@end
