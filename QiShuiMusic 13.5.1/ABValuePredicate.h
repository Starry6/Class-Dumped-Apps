@interface ABValuePredicate : ABPredicate
@property (nonatomic) NSInteger property;
@property (nonatomic) q comparison;
@property (nonatomic) NSObject value;
- (void)setProperty:;
- (long long)comparison;
- (id)init;
- (void)dealloc;
- (int)property;
- (id)predicateFormat;
- (void)setValue:;
- (BOOL)isValid;
- (id)value;
- (void)setComparison:;
- (id)queryWhereStringForPredicateIdentifier:;
- (void)ab_bindWhereClauseComponentOfStatement:withBindingOffset:predicateIdentifier:;
- (id)querySelectPropertiesForPredicateIdentifier:;
- (id)queryJoinsInCompound:predicateIdentifier:;
- (BOOL)_shouldConsultIndexForKey:;
- (BOOL)_supportsFTSSearch;
- (BOOL)_allowsLaxCheckingForFTS;
- (id)stringForComparison:;
- (id)_ftsTermStringForString:;
- (id)_ftsTokenizedTermStringForString:;
- (id)_ftsAllQueryStrings;
+ (id)stringForComparison:withComparision:;
@end
