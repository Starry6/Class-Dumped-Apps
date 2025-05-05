@interface EFSQLIndexedColumnSchema : NSObject
@property (nonatomic) <EFSQLExpressable> expression;
@property (nonatomic) Q collation;
@property (nonatomic) Q orderDirection;
@property (nonatomic) NSString name;
@property (nonatomic) NSString definition;
- (id)definition;
- (unsigned long long)collation;
- (id)expression;
- (void).cxx_destruct;
- (id)name;
- (id)initWithExpression:;
- (id)initWithColumnName:;
- (id)initWithColumnName:orderDirection:;
- (id)initWithExpression:collation:orderDirection:;
- (id)initWithExpression:orderDirection:;
- (id)initWithColumnName:collation:orderDirection:;
- (unsigned long long)orderDirection;
@end
