@interface PHQueryPersonContext : NSObject
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextPeopleHomePredicate;
- (id)_faceCountPredicateWithMinimum:;
- (id)_verifiedVisiblePredicate;
- (id)initWithFetchOptions:;
- (id)_notHiddenTypePredicate;
- (id)personContextOneUpPredicate;
- (id)personContextNonePredicates;
- (void).cxx_destruct;
- (id)_notVerifiedPredicate;
- (id)_verifiedPredicate;
- (id)subpredicates;
+ (id)subpredicatesForFetchOptions:;
@end
