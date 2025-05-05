@interface NSSQLAliasGenerator : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithNestingLevel:;
- (id)generateTableAlias;
- (id)generateSubqueryVariableAlias;
@end
