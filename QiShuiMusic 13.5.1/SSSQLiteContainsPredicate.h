@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate
@property (nonatomic) BOOL negative;
@property (nonatomic) SSSQLiteQuery query;
@property (nonatomic) NSString queryProperty;
@property (nonatomic) NSArray values;
- (void)bindToStatement:bindingIndex:;
- (id)SQLForEntityClass:;
- (void)dealloc;
- (id)values;
- (id)query;
- (id)queryProperty;
- (BOOL)isNegative;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)containsPredicateWithProperty:values:;
+ (id)containsPredicateWithProperty:query:queryProperty:;
+ (id)doesNotContainPredicateWithProperty:values:;
@end
