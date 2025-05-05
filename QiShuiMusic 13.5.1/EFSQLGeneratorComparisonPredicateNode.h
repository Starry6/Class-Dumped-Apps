@interface EFSQLGeneratorComparisonPredicateNode : NSObject
@property (nonatomic) NSArray keypathGenerators;
@property (nonatomic) Q predicateOperator;
@property (nonatomic) <EFSQLExpressable> constValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (unsigned long long)predicateOperator;
- (id)sqlExpressableWithTableExpressions:;
- (void)traverseTreeWithAliasMap:;
- (id)initWithKeypathGenerators:predicateOperator:constValue:;
- (id)keypathGenerators;
- (id)constValue;
@end
