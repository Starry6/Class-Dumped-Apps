@interface EFSQLAndExpression : NSObject
@property (nonatomic) NSArray expressions;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (void).cxx_destruct;
- (id)expressions;
- (id)initWithExpressions:;
+ (id)combined:;
@end
