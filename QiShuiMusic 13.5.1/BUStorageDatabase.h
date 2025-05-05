@interface BUStorageDatabase : NSObject
@property (nonatomic) NSString path;
- (id)_addDefaultFields:;
- (BOOL)_checkAndInsertColumnWithField:inTableNamed:;
- (BOOL)_clostDB;
- (BOOL)createTableIfNeededWithName:fields:;
- (id)selectTableWithName:;
- (id)selectTableWithName:security:;
- (id)path;
- (BOOL)_openDB;
- (void)setPath:;
- (void).cxx_destruct;
+ (void)_cacheDatabase:withName:;
+ (id)_databaseCachedWithName:;
+ (id)_tablePathWithName:;
+ (id)databaseWithName:;
+ (id)rootPath;
+ (id)_databases;
@end
