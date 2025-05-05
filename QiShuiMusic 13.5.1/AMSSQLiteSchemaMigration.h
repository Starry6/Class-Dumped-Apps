@interface AMSSQLiteSchemaMigration : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) BOOL success;
- (id)error;
- (BOOL)success;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)executeStatement:;
- (void)executeOptionalStatement:;
- (void)executeOptionalStatement:bindings:;
- (void)executeStatement:bindings:;
- (void)_executeStatement:canFailMigration:bindings:;
@end
