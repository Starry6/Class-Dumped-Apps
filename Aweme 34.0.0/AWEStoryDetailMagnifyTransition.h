@interface AWEStoryDetailMagnifyTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (id)addMaskViewToContainerView:;
- (id)addTargetViewToContainerView:fromContainer:;
- (id)calculateEndViewFrameForContainer:toPlayer:;
- (void)hideTabBarWithAnimation:containerView:duration:context:;
- (void)updateToPlayer:WithFromContainer:playerController:;
- (unsigned long long)interactionType;
@end
