@interface CNiOSABPreferredChannelContactPredicate : CNPredicate
@property (nonatomic) NSString preferredChannel;
@property (nonatomic) BOOL limitOne;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)shortDebugDescription;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (unsigned long long)hash;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (id)preferredChannel;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (void)setPreferredChannel:;
- (BOOL)isEqual:;
- (id)initWithPreferredChannel:limitOne:;
- (BOOL)limitOne;
- (void)setLimitOne:;
+ (BOOL)supportsSecureCoding;
@end
