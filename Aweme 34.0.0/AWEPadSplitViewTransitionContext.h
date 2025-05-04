@interface AWEPadSplitViewTransitionContext : NSObject
@property (nonatomic) AWEPadSplitViewServiceImpl service;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateSecondaryViewOffsetX:;
- (id)initWithService:;
- (id)completion;
- (id)service;
- (void)cancelTransition;
- (void)setService:;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)finishTransition;
@end
