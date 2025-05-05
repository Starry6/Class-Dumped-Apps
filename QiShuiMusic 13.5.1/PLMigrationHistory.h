@interface PLMigrationHistory : PLManagedObject
@property (nonatomic) q index;
@property (nonatomic) q modelVersion;
@property (nonatomic) NSNumber sourceModelVersion;
@property (nonatomic) NSString osVersion;
@property (nonatomic) s migrationType;
@property (nonatomic) NSDate migrationDate;
@property (nonatomic) NSNumber forceRebuildReason;
@property (nonatomic) NSDictionary globalKeyValues;
@property (nonatomic) NSString storeUUID;
@property (nonatomic) NSString frameworkUUID;
@property (nonatomic) s origin;
- (id)payloadID;
- (id)payloadIDForTombstone:;
- (id)payloadForChangedKeys:;
- (BOOL)supportsCloudUpload;
+ (id)entityName;
+ (id)currentMigrationHistoryWithManagedObjectContext:;
+ (id)insertCreatedWithManagedObjectContext:index:migrationDate:;
+ (id)insertLightweightWithManagedObjectContext:index:sourceModelVersion:migrationDate:;
+ (id)insertRebuildWithManagedObjectContext:index:migrationDate:forceRebuildReason:;
+ (id)insertIntoManagedObjectContext:index:sourceModelVersion:migrationType:migrationDate:forceRebuildReason:;
+ (id)migrationHistoryWithManagedObjectContext:;
+ (BOOL)currentMigrationHistoryIndex:withManagedObjectContext:error:;
+ (id)migrateLegacyMigrationHistoryWithMetadata:index:outGlobalKeyValues:managedObjectContext:;
+ (BOOL)recordCurrentMigrationStateInManagedObjectContext:withPathManager:migrationType:forceRebuildReason:sourceModelVersion:updateLegacyMigrationState:journalRebuildRequred:origin:libraryCreateOptions:;
+ (long long)_rebuildMigrationHistoryWithJournal:managedObjectContext:;
@end
