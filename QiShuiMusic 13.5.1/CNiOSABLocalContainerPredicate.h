@interface CNiOSABLocalContainerPredicate : CNPredicate
@property (nonatomic) BOOL includesDisabledContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithPredicate:;
- (id)cn_copyContainersInAddressBook:error:;
- (BOOL)includesDisabledContainers;
- (id)initWithDisabledContainerIncluded:;
- (BOOL)includesDisabledContainer;
+ (BOOL)supportsSecureCoding;
@end
