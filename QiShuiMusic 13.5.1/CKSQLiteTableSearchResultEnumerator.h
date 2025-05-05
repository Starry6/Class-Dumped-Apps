@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator
@property (nonatomic) CKSQLiteCompiledStatement statement;
@property (nonatomic) CKSQLiteCompiledStatement statement;
@property (nonatomic) NSError error;
- (id)statement;
- (void)setStatement:;
- (id)nextObject;
- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (id)cksqlcs_appendSQLConstantValueToString:;
- (id)initWithTable:statement:;
- (void)invalidate;
@end
