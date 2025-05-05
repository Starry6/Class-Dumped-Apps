@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate
@property (nonatomic) q comparisonType;
@property (nonatomic) @ value;
- (void)bindToStatement:bindingIndex:;
- (long long)comparisonType;
- (id)SQLForEntityClass:;
- (void)dealloc;
- (id)_comparisonTypeString;
- (unsigned long long)hash;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)predicateWithProperty:equalToLongLong:;
+ (id)predicateWithProperty:equalToValue:;
+ (id)predicateWithProperty:value:comparisonType:;
@end
