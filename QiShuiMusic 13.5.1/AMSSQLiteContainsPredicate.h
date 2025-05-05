@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate
@property (nonatomic) BOOL negative;
@property (nonatomic) AMSSQLiteQuery query;
@property (nonatomic) NSString queryProperty;
@property (nonatomic) NSArray values;
- (id)SQLForEntityClass:;
- (id)values;
- (id)query;
- (id)queryProperty;
- (void).cxx_destruct;
- (BOOL)isNegative;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)applyBinding:atIndex:;
+ (id)containsPredicateWithProperty:values:;
+ (id)containsPredicateWithProperty:query:queryProperty:;
+ (id)doesNotContainPredicateWithProperty:values:;
@end
