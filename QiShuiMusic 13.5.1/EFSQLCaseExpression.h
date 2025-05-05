@interface EFSQLCaseExpression : NSObject
@property (nonatomic) <EFSQLValueExpressable> baseExpression;
@property (nonatomic) NSMapTable whenExpressions;
@property (nonatomic) <EFSQLValueExpressable> elseExpression;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)init;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)initWithBaseExpression:;
- (id)elseExpression;
- (void)setElseExpression:;
- (id)baseExpression;
- (id)whenExpressions;
@end
