@interface NSSQLStatementIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)governingEntity;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:;
- (BOOL)keypathExpressionIsSafeLHSForIn:;
- (id)initWithEntity:alias:inScope:;
- (void)setGoverningAlias:;
- (id)governingEntityForKeypathExpression:;
- (void)setGoverningEntity:;
@end
