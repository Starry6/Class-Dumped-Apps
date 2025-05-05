@interface FLEXRealmDatabaseManager : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) RLMRealm realm;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPath:;
- (BOOL)open;
- (id)queryAllTables;
- (id)queryAllColumnsOfTable:;
- (id)queryAllDataInTable:;
- (id)path;
- (void)setPath:;
- (id)realm;
- (void)setRealm:;
- (void).cxx_destruct;
+ (id)managerForDatabase:;
@end
