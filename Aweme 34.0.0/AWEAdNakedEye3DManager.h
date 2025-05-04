@interface AWEAdNakedEye3DManager : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> playInteractionViewController;
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> playVideoViewController;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)initWithAweme:;
- (void)onPlayerWillLoopPlaying:;
- (void)onUpdatePlayerController:withPlayVideoVC:;
- (id)commerceContext;
- (void)setCommerceContext:;
- (id)playInteractionViewController;
- (void)setPlayInteractionViewController:;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (void)prepareForPlaying;
- (void)setModel:;
- (id)init;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)canShowComponentWithContext:;
@end
