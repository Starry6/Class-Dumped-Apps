@interface EFSQLOrderExpression : NSObject
@property (nonatomic) <EFSQLExpressable> expression;
@property (nonatomic) BOOL isAscending;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)expression;
- (id)initWithExpression:ascending:;
- (BOOL)isAscending;
- (void).cxx_destruct;
@end
