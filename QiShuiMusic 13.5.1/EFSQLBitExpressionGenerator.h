@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator
@property (nonatomic) <EFSQLValueExpressable> bitExpression;
- (void).cxx_destruct;
- (id)initWithTableRelationship:whereExpression:previousExpressionGenerator:bitExpression:;
- (void)bitExpressionWithKeyColumn:;
- (id)bitExpression;
@end
