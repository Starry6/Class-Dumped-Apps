@interface ABUDatabase : NSObject
@property (nonatomic) NSString path;
- (id)_addDefaultFields:;
- (BOOL)_checkAndInsertColumnWithField:inTableNamed:;
- (BOOL)createTableIfNeededWithName:fields:;
- (id)selectTableWithName:;
- (id)selectTableWithName:security:;
- (id)path;
- (BOOL)_openDB;
- (void)setPath:;
- (void).cxx_destruct;
- (BOOL)_closeDB;
+ (void)_cacheDatabase:withName:;
+ (id)_databaseCachedWithName:;
+ (id)_tablePathWithName:;
+ (id)databaseWithName:;
+ (id)_databases;
@end
