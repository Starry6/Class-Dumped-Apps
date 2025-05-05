@interface CNiOSABPredicateRunner : NSObject
- (id)personPredicateWithNameLike:inSource:addressBook:;
- (void)searchPeopleWithPredicate:sortOrder:ranked:inAddressBook:withDelegate:;
- (id)personPredicateWithNameLike:inGroups:sources:addressBook:;
@end
