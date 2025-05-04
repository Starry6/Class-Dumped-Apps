@interface AWEHPEdgeBackManager : NSObject
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) AWEHPEdgeBackConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)viewControllerTransitionNotification:;
- (void)trySetup;
- (void)trackPagePopQuitWithFromVC:toVC:quitMethod:animationType:touchLocation:;
- (BOOL)fullScreenPanGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)fullScreenPanGestureRecognizer:didEndWithShouldComplete:transitionContext:;
- (void)setConfig:;
- (void)dealloc;
- (id)config;
- (void).cxx_destruct;
- (id)setupConfig;
+ (id)forbidTrackPages;
+ (id)animationTypeWithProviderClass:;
+ (id)sharedInstance;
@end
