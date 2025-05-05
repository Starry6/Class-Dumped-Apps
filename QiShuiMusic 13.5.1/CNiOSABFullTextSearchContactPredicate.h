@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (id)initWithSearchString:containerIdentifiers:groupIdentifiers:;
- (id)cn_fetchPeopleInAddressBook:fetchRequest:progressiveResults:completion:environment:;
- (id)_predicatesWithAddressBook:environment:;
@end
