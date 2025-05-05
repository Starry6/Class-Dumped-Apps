@interface CNiOSABContactIdentifiersPredicate : CNContactsWithIdentifiersPredicate
@property (nonatomic) BOOL ignoreUnifiedIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (BOOL)ignoreUnifiedIdentifiers;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)initWithIdentifiers:ignoreUnifiedIdentifiers:;
@end
