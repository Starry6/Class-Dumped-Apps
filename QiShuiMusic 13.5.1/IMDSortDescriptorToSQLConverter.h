@interface IMDSortDescriptorToSQLConverter : NSObject
@property (nonatomic) NSDictionary keyPathsToColumns;
@property (nonatomic) NSString expression;
- (id)init;
- (id)expression;
- (void).cxx_destruct;
- (id)keyPathsToColumns;
- (id)_columnWithSortDescriptor:;
- (id)_orderByClauseWithSortDescriptor:;
- (id)initWithSortDescriptor:keyPathsToColumns:;
@end
