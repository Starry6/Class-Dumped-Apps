@interface SSWishlistDatabaseSchema : NSObject
+ (void)createSchemaInDatabase:;
+ (id)databasePathWithAccountIdentifier:;
+ (void)_migrate7000to7001InDatabase:;
+ (void)_migrate7001to7002InDatabase:;
@end
