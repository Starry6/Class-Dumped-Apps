@interface EFSQLGeneratorCompoundPredicateNode : NSObject
@property (nonatomic) Q predicateType;
@property (nonatomic) NSArray childPredicates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)sqlExpressableWithTableExpressions:;
- (void)traverseTreeWithAliasMap:;
- (id)initWithPredicateType:childPredicates:;
- (unsigned long long)predicateType;
- (id)childPredicates;
@end
