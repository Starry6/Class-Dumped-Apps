@interface CNiOSABURLContactPredicate : CNPredicate
@property (nonatomic) NSString urlString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)urlString;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (void).cxx_destruct;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)initWithURLString:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:nserror:;
+ (BOOL)supportsSecureCoding;
@end
