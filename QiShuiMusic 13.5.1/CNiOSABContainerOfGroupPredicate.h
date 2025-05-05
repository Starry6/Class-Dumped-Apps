@interface CNiOSABContainerOfGroupPredicate : CNPredicate
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)initWithGroupIdentifier:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
+ (BOOL)supportsSecureCoding;
@end
