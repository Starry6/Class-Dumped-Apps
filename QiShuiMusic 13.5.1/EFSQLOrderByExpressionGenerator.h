@interface EFSQLOrderByExpressionGenerator : NSObject
@property (nonatomic) NSArray generators;
@property (nonatomic) BOOL ascending;
- (BOOL)ascending;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithGenerators:ascending:;
- (id)orderByExpression;
- (BOOL)isEqualToEFSQLOrderByExpressionGenerator:;
- (id)generators;
@end
