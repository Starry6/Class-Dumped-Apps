@interface AWEModernFullscreenMagnifyTransition : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> playController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (id)aAWEPlayInteractionAdapter;
- (id)generateFeedSnapshotImageView:targetVC:fromCP:;
- (void)setPlayController:;
- (id)playController;
- (id)generateFeedSnapshotForImage:isRichAweme:;
- (id)init;
- (void)dealloc;
- (double)transitionDuration:;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
