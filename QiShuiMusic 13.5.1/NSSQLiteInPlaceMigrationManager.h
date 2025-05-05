@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager
- (void)dealloc;
- (BOOL)migrateStoreFromURL:type:options:withMappingModel:toDestinationURL:destinationType:destinationOptions:error:;
+ (BOOL)_canMigrateWithMappingModel:;
@end
