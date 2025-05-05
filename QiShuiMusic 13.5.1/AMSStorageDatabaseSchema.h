@interface AMSStorageDatabaseSchema : NSObject
+ (BOOL)createOrUpdateSchemaUsingConnection:;
+ (void)migrateVersion0to1WithMigration:;
@end
