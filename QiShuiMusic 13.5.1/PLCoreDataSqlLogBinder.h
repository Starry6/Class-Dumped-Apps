@interface PLCoreDataSqlLogBinder : NSObject
@property (nonatomic) NSString boundSql;
- (id)init;
- (void).cxx_destruct;
- (void)addLogLine:;
- (id)boundSql;
- (id)pool_boundSql;
@end
