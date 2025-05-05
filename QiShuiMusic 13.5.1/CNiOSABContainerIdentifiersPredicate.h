@interface CNiOSABContainerIdentifiersPredicate : CNPredicate
@property (nonatomic) NSArray identifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIdentifiers:;
- (id)identifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
+ (BOOL)supportsSecureCoding;
@end
