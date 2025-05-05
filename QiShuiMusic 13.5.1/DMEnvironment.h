@interface DMEnvironment : NSObject
@property (nonatomic) BOOL testMigrationInfrastructureOnly;
- (id)buildVersion;
- (void)setUserDataDispositionPref:;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (id)context;
- (BOOL)testMigrationInfrastructureOnly;
- (id)contextPath;
- (void)setMigrationPluginResultsPref:;
- (void)setLastMigrationResultsPref:;
- (id)userDataDispositionPref;
- (void)setTestMigrationInfrastructureOnly:;
- (void)blockUntilPreferencesFlush;
- (id)continuousIntegrationMarkerPref;
- (BOOL)deviceModeIsSharediPad;
- (id)migrationPluginResultsPref;
- (id)lastBuildVersionPref;
- (BOOL)implementMigrationPluginResults;
- (void)clearContext;
- (id)lastMigrationResultsPref;
- (BOOL)userSessionIsLoginWindow;
- (void)setContext:;
- (void)setLastBuildVersionPref:;
- (BOOL)isDeviceUsingEphemeralStorage;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
+ (id)sharedInstance;
+ (BOOL)isBuildVersion:equalToBuildVersion:;
@end
