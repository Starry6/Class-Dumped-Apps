@interface CNiOSABDefaultContainerForAccountPredicate : CNPredicate
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)initWithAccountIdentifier:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
+ (BOOL)supportsSecureCoding;
@end
