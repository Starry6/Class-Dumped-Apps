@interface CNiOSABContactsInContainerPredicate : CNPredicate
@property (nonatomic) NSString parentContainerIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (id)initWithParentContainerIdentifier:;
- (id)parentContainerIdentifier;
+ (BOOL)supportsSecureCoding;
@end
