@interface CNiOSABContainerOfContactPredicate : CNPredicate
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)initWithContactIdentifier:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
+ (BOOL)supportsSecureCoding;
@end
