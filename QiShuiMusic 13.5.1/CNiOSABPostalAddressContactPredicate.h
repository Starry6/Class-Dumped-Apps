@interface CNiOSABPostalAddressContactPredicate : CNPredicate
@property (nonatomic) CNPostalAddress postalAddress;
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
- (BOOL)isEqual:;
- (id)initWithPostalAddress:;
- (id)postalAddress;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (void)setPostalAddress:;
+ (BOOL)supportsSecureCoding;
@end
