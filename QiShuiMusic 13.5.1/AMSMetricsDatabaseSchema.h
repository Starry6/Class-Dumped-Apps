@interface AMSMetricsDatabaseSchema : NSObject
+ (void)migrateVersion3to4WithMigration:;
+ (BOOL)createOrUpdateSchemaUsingConnection:;
+ (void)migrateVersion1to2WithMigration:;
+ (void)migrateVersion4to5WithMigration:;
+ (void)migrateVersion2to3WithMigration:;
+ (void)migrateVersion0to1WithMigration:;
@end
