@interface NSSQLIndexIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)governingEntity;
- (id)generateSQLStringInContext:;
- (BOOL)isIndexScoped;
- (BOOL)isIndexExpressionScoped;
- (id)initForIndex:withScope:;
@end
