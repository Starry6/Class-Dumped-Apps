@interface EFSQLSelectExpressionGenerator : NSObject
@property (nonatomic) NSArray columnExpressionGenerators;
@property (nonatomic) NSSet tableExpressionGenerators;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initExpressionGeneratorWithColumns:tables:;
- (id)selectExpression;
- (id)columnAliases;
- (BOOL)isEqualToSelectExpressionGenerator:;
- (id)columnExpressionGenerators;
- (id)tableExpressionGenerators;
@end
