@interface AMSCookieDatabaseSchema : NSObject
+ (BOOL)createOrUpdateSchemaUsingConnection:;
+ (void)migrateVersion0to1WithMigration:;
@end
