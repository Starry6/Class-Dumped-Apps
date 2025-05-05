@interface NSStoreMigrationPolicy : NSObject
- (void)dealloc;
- (id)sourceModelForStoreAtURL:metadata:error:;
- (id)createMigrationManagerForSourceModel:destinationModel:error:;
- (id)migrateStoreAtURL:withManager:metadata:options:error:;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:;
+ (id)migrationStoreOptionsFromStoreOptions:;
+ (id)destinationURLForMigrationSourceURL:createDocumentReplacementDirectory:error:;
@end
