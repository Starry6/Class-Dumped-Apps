@interface CNiOSABPreferredNameContactsPredicate : CNPredicate
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)initWithRange:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (id)range;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
