@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate
@property (nonatomic) NSString accountExternalIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
- (id)initWithAccountExternalIdentifier:;
- (id)accountExternalIdentifier;
+ (BOOL)supportsSecureCoding;
@end
