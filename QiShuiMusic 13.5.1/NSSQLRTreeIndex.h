@interface NSSQLRTreeIndex : NSSQLIndex
- (void)dealloc;
- (id)bulkUpdateStatementsForStore:;
- (id)dropStatementsForStore:;
- (id)generateStatementsForStore:;
- (id)initForIndexDescription:sqlEntity:;
@end
