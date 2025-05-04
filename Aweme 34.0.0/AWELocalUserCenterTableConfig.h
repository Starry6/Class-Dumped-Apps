@interface AWELocalUserCenterTableConfig : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) q userType;
@property (nonatomic) BOOL deleteBlockedUser;
@property (nonatomic) BOOL deleteUnfollowedUser;
@property (nonatomic) # modelClass;
@property (nonatomic) BOOL hasSynced;
- (void)setDeleteBlockedUser:;
- (void)setDeleteUnfollowedUser:;
- (void)setHasSynced:;
- (BOOL)deleteBlockedUser;
- (BOOL)deleteUnfollowedUser;
- (id)tableName;
- (void)setTableName:;
- (void)setModelClass:;
- (long long)userType;
- (void).cxx_destruct;
- (Class)modelClass;
- (BOOL)hasSynced;
@end
