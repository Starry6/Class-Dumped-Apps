@interface CNiOSABInstantMessageAddressContactPredicate : CNPredicate
@property (nonatomic) CNInstantMessageAddress imAddress;
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
- (BOOL)isEqual:;
- (id)imAddress;
- (id)initWithInstantMessageAddress:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (void)setImAddress:;
+ (BOOL)supportsSecureCoding;
@end
