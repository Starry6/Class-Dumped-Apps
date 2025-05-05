@interface IMDPredicateToSQLConverter : NSObject
@property (nonatomic) NSDictionary keyPathsToColumns;
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSString expression;
- (id)init;
- (id)expression;
- (id)parameters;
- (void).cxx_destruct;
- (id)keyPathsToColumns;
- (id)initWithPredicate:keyPathsToColumns:;
- (void)bindParametersToSqliteWithStatement:;
@end
