@interface BKSHIDEventDiscreteDispatchingRule : NSObject
@property (nonatomic) BKSHIDEventDiscreteDispatchingPredicate predicate;
@property (nonatomic) BKSHIDEventDispatchingTarget target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_initWithPredicate:target:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)predicate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)target;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)ruleForDispatchingDiscreteEventsMatchingPredicate:toTarget:;
@end
