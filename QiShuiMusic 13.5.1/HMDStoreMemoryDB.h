@interface HMDStoreMemoryDB : NSObject
@property (nonatomic) NSMutableDictionary databaseDic;
- (void)setDatabaseDic:;
- (id)databaseDic;
- (void)deleteAllObjectsFromTable:appID:;
- (void)deleteObjectsFromTable:appID:count:;
- (id)getAllObjectsWithTableName:appID:;
- (id)getObjectsWithTableName:appID:limit:;
- (BOOL)insertObjects:into:appID:;
- (long long)recordCountForTable:appID:;
- (id)tableWithTableName:appID:;
- (id)init;
- (void).cxx_destruct;
@end
