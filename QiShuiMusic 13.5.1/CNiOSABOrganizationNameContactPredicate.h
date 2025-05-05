@interface CNiOSABOrganizationNameContactPredicate : CNPredicate
@property (nonatomic) NSString organizationName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (unsigned long long)hash;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)organizationName;
- (BOOL)isEqual:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (id)initWithOrganizationName:;
+ (BOOL)supportsSecureCoding;
@end
