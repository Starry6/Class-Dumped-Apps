@interface BKSHIDEventKeyCommandsDispatchingPredicate : NSObject
@property (nonatomic) NSSet senderDescriptors;
@property (nonatomic) NSSet displays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displays;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)_initWithSenderDescriptors:;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)senderDescriptors;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
