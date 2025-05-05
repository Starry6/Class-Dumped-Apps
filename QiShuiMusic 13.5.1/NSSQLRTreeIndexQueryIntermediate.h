@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initForIndexNamed:onEntity:properties:ranges:inScope:;
@end
