@interface RBSProcessPredicateImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)matchesProcess:;
- (id)processIdentifier;
- (id)processIdentifiers;
- (id)description;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
