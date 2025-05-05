@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate
@property (nonatomic) q comparisonType;
@property (nonatomic) @ value;
- (long long)comparisonType;
- (id)SQLForEntityClass:;
- (id)_comparisonTypeString;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)applyBinding:atIndex:;
+ (id)predicateWithProperty:equalToLongLong:;
+ (id)predicateWithProperty:equalToValue:;
+ (id)predicateWithProperty:value:comparisonType:;
@end
