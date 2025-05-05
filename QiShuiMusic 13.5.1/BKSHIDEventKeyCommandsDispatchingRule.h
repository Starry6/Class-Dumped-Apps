@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject
@property (nonatomic) BKSHIDEventKeyCommandsDispatchingPredicate predicate;
@property (nonatomic) NSArray targets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targets;
- (id)init;
- (id)_initWithPredicate:targets:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)predicate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:toTargets:;
@end
