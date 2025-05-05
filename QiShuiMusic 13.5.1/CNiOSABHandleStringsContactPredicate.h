@interface CNiOSABHandleStringsContactPredicate : CNHandleStringsContactPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_ABQSLPredicateForAddressBook:fetchRequest:error:;
- (id)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error:;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)handlesPredicateWithMap:;
+ (id)peopleForPredicate:sortOrder:addressBook:;
@end
