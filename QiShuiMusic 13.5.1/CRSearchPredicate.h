@interface CRSearchPredicate : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)asNSPredicate;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForKey:inCollection:;
+ (id)predicateSatisfyingAllSubpredicates:;
+ (id)predicateForKey:matchingText:comparison:;
+ (id)predicateSatisfyingAnySubpredicate:;
+ (id)secureCodableSubclasses;
@end
