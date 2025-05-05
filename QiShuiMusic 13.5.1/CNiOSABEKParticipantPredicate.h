@interface CNiOSABEKParticipantPredicate : CNPredicate
@property (nonatomic) NSString name;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString customDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emailAddress;
- (BOOL)cn_supportsNativeSorting;
- (void)setName:;
- (void)setEmailAddress:;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)name;
- (void)setURL:;
- (id)customDescription;
- (id)URL;
- (id)initWithName:URL:emailAddress:customDescription:;
- (void)setCustomDescription:;
+ (BOOL)supportsSecureCoding;
@end
