@interface FBSDisplayLayoutTransitionContext : NSObject
@property (nonatomic) NSSet transitionReasons;
@property (nonatomic) NSString transitionReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (void)setTransitionReasons:;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (id)transitionReasons;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)transitionReason;
- (id)descriptionWithMultilinePrefix:;
@end
