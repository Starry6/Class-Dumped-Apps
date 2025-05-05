@interface PIADataBaseService : NSObject
@property (nonatomic) FMDatabaseQueue dbQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_executeUpdate:value:inTrancation:error:;
- (BOOL)executeCreate:values:inTransaction:error:;
- (BOOL)executeDelete:values:inTransaction:error:;
- (void)executeIntransaction:;
- (void)executeQuery:values:error:inTransaction:completion:;
- (BOOL)executeReplace:values:inTransaction:error:;
- (id)initService;
- (void).cxx_destruct;
- (id)dbQueue;
- (void)setDbQueue:;
+ (void)executePrepareServiceTask;
@end
