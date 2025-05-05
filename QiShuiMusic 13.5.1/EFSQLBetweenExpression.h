@interface EFSQLBetweenExpression : EFPair
@property (nonatomic) <EFSQLExpressable> left;
@property (nonatomic) BOOL between;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)initWithLeft:firstValue:secondValue:between:;
- (id)left;
- (void).cxx_destruct;
- (void)setColumnExpression:;
- (BOOL)between;
@end
