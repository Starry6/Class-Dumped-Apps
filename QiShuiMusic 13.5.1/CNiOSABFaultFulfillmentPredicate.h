@interface CNiOSABFaultFulfillmentPredicate : CNPredicate
@property (nonatomic) NSInteger legacyIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)identifier;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (unsigned long long)hash;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (int)legacyIdentifier;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (BOOL)isEqual:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
- (id)initWithLegacyIdentifier:identifier:;
+ (BOOL)supportsSecureCoding;
+ (id)os_log;
@end
