@interface PLModelMigration : NSObject
@property (nonatomic) NSProgress progress;
@property (nonatomic) PLModelMigratorLog logger;
@property (nonatomic) NSString migrationUUID;
@property (nonatomic) BOOL allowRebuild;
@property (nonatomic) BOOL didCreateSqliteErrorIndicator;
@property (nonatomic) @ legacyMigrationDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pathManager;
- (id)logger;
- (void)setProgress:;
- (void)setLogger:;
- (id)progress;
- (id)migrationContext;
- (void).cxx_destruct;
- (long long)migrateWithError:;
- (id)analyticsEventManager;
- (BOOL)isMigrationCancelledWithError:;
- (id)migrationUUID;
- (void)setMigrationUUID:;
- (id)initWithMigrationContext:logger:;
- (void)actionRegistration;
- (void)registerActionClass:onCondition:;
- (void)registerStagedActionClass:onCondition:;
- (void)registerPreRepairActionClass:onCondition:;
- (void)registerPostRepairActionClass:onCondition:;
- (void)_registerActionClass:actionsContainer:progressPortion:;
- (long long)setupWithError:;
- (long long)migrateStagedMigrationWithAutoMigrationOptions:currentStoreVersion:error:;
- (long long)migrateSchemaMigrationWithAutoMigrationOptions:currentStoreVersion:error:;
- (long long)migratePostProcessingWithProgressUnitCount:error:;
- (long long)migratePostProcessingWithActions:migrationActionType:progress:progressUnitCount:error:;
- (id)addStoreWithCoordinator:migrationUUID:storeURL:options:description:fromVersion:toVersion:progress:progressUnitCount:error:;
- (id)_nextRequiredStagedMigrationVersionAfterVersion:;
- (id)_managedObjectModelForLightweightMigrationStageWithURL:;
- (id)_stagedManagedObjectModelURLWithStageVersion:;
- (long long)runMigrationAction:withCoordinator:error:;
- (BOOL)allowRebuild;
- (BOOL)didCreateSqliteErrorIndicator;
- (id)legacyMigrationDelegate;
- (void)setLegacyMigrationDelegate:;
+ (int)currentModelVersion;
@end
