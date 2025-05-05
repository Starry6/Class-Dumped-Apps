@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl
- (BOOL)matchesProcess:;
- (BOOL)isEqual:;
+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingProcessIdentifier:;
+ (id)legacyPredicateMatchingBundleIdentifier:;
@end
