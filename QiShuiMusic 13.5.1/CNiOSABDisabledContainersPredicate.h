@interface CNiOSABDisabledContainersPredicate : CNPredicate
@property (nonatomic) BOOL includesDisabledContainers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithPredicate:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
- (id)initWithDisabledContainersIncluded:;
+ (BOOL)supportsSecureCoding;
@end
