@interface IESSaaSTIMDatabaseMigrator : NSObject
- (BOOL)migrateDatabase:;
- (void)migrateFromVersion:inDatabase:;
- (BOOL)registerTableClass:inDatabase:;
- (BOOL)setUpDatabase:;
@end
