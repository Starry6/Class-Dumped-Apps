@interface AWERVDSlideMagnifyTransition : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> playController;
@property (nonatomic) BOOL autoPause;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (void)setPlayController:;
- (id)playController;
- (void)setAutoPause:;
- (BOOL)autoPause;
- (id)init;
- (double)transitionDuration:;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
@end
