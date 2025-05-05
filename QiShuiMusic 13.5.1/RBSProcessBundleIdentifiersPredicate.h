@interface RBSProcessBundleIdentifiersPredicate : RBSProcessCollectionPredicateImpl
- (id)initWithIdentifiers:;
- (id)initWithRBSXPCCoder:;
- (BOOL)matchesProcess:;
@end
