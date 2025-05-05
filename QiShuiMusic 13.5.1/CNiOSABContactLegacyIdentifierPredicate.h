@interface CNiOSABContactLegacyIdentifierPredicate : CNPredicate
@property (nonatomic) NSInteger legacyIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (int)legacyIdentifier;
- (void)encodeWithCoder:;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)description;
- (id)initWithLegacyIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
