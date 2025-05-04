@interface AWEStoryDetailShrinkTransition : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> playController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (void)setPlayController:;
- (id)playController;
- (id)addTargetViewToContainerView:fromPlayer:;
- (void)updateToContainer:fromPlayer:playerController:;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
@end
