@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate
@property (nonatomic) NSArray containerIdentifiers;
@property (nonatomic) NSArray groupIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)containerIdentifiers;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (id)groupIdentifiers;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)initWithContainerIdentifiers:groupIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
