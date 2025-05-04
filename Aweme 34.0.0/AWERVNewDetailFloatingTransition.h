@interface AWERVNewDetailFloatingTransition : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <IESVideoPlayerProtocol> playController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (void)setPlayController:;
- (id)playController;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
@end
