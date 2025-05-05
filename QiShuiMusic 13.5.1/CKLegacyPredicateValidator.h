@interface CKLegacyPredicateValidator : CKPredicateValidator
- (BOOL)validateContainsPredicate:;
- (void)validateCompoundPredicate:;
- (void)validate:;
- (BOOL)validateInPredicate:;
- (BOOL)validate:error:;
- (BOOL)validateBasicOperatorPredicate:;
- (BOOL)validateBeginsWithPredicate:;
- (BOOL)validateContainsAnyPredicate:;
- (BOOL)validateBetweenPredicate:;
- (unsigned long long)_comparisonOptionForString:;
- (BOOL)validateContainsAllInPredicate:;
- (BOOL)validateFullTextSearchPredicate:;
- (BOOL)validateNearPredicate:;
- (void)validateComparisonPredicate:;
@end
