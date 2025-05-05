@interface RBSProcessIdentifiersPredicate : RBSProcessCollectionPredicateImpl
@property (nonatomic) NSSet processIdentifiers;
- (id)initWithIdentifiers:;
- (id)initWithRBSXPCCoder:;
- (BOOL)matchesProcess:;
- (id)processIdentifiers;
@end
