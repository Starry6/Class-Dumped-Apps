@interface CNiOSABContainersForAccountPredicate : CNPredicate
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) BOOL includesDisabledContainers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accountIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
- (id)initWithAccountIdentifier:includingDisabledContainers:;
+ (BOOL)supportsSecureCoding;
@end
