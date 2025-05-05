@interface HMDDatabaseOperationRecord : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) NSArray andConditions;
@property (nonatomic) NSArray orConditions;
@property (nonatomic) q limitCount;
- (id)andConditions;
- (id)orConditions;
- (void)setAndConditions:;
- (void)setOrConditions:;
- (long long)limitCount;
- (void)setLimitCount:;
- (id)tableName;
- (void)setTableName:;
- (void).cxx_destruct;
@end
