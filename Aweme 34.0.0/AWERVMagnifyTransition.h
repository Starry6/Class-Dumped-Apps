@interface AWERVMagnifyTransition : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> playController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (void)setPlayController:;
- (id)playController;
- (id)generateFeedSnapshotImageView:targetVC:;
- (id)generateFeedSnapshotForImage:;
- (double)transitionDuration:;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
@end
