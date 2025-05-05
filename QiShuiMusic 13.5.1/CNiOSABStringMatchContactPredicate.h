@interface CNiOSABStringMatchContactPredicate : CNPredicate
@property (nonatomic) NSString searchString;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)containerIdentifier;
- (id)groupIdentifier;
- (id)searchString;
- (id)accountIdentifier;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)initWithSearchString:accountIdentifier:containerIdentifier:groupIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
