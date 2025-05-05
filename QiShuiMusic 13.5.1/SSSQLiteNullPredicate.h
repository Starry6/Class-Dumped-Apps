@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate
@property (nonatomic) BOOL matchesNull;
- (id)SQLForEntityClass:;
- (BOOL)isEqual:;
- (BOOL)matchesNull;
- (id)copyWithZone:;
+ (id)isNullPredicateWithProperty:;
+ (id)isNotNullPredicateWithProperty:;
@end
