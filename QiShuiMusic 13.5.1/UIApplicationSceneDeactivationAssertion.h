@interface UIApplicationSceneDeactivationAssertion : NSObject
@property (nonatomic) UIApplicationSceneDeactivationManager manager;
@property (nonatomic) q reason;
@property (nonatomic) @? predicate;
@property (nonatomic) BOOL acquired;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithReason:manager:;
- (void)acquire;
- (void)acquireWithPredicate:transitionContext:;
- (long long)reason;
- (id)succinctDescriptionBuilder;
- (id)predicate;
- (id)manager;
- (void).cxx_destruct;
- (void)relinquish;
- (id)succinctDescription;
- (id)description;
- (BOOL)isAcquired;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
