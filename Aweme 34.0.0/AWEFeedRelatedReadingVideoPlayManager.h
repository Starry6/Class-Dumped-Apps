@interface AWEFeedRelatedReadingVideoPlayManager : NSObject
@property (nonatomic) UIViewController currentViewController;
@property (nonatomic) BOOL playerIsPlayingWhenInit;
@property (nonatomic) <AWEAwemePlayInteractionPanelControllerProtocol> interactionDelegate;
@property (nonatomic) <AWEAwemeBizPlayVideoProtocol><AWEPlayVideoViewControllerProtocol> videoDelegate;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> container;
- (BOOL)isShowingRelatedReadingPanel;
- (void)setupWithPanelController:;
- (void)didFirstAppearWithTargetHeight:;
- (void)didNotFirstAppear;
- (void)switchWithIsHalfScreen:;
- (void)containerFrameDidChangeWithRatio:;
- (void)containerDidClose;
- (void)resetVideoPlay;
- (void)setPlayerIsPlayingWhenInit:;
- (void)tryHidePauseIcon;
- (void)hideInteractionController;
- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)resumeInteractionController;
- (BOOL)playerIsPlayingWhenInit;
- (void)tryShowPauseIcon;
- (void)setContainer:;
- (id)container;
- (id)interactionDelegate;
- (void)setInteractionDelegate:;
- (void).cxx_destruct;
- (void)didDisappear;
- (id)currentViewController;
- (void)setCurrentViewController:;
- (void)setVideoDelegate:;
- (id)videoDelegate;
+ (id)sharedManager;
@end
