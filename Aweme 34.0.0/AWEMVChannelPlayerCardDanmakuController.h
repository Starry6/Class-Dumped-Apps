@interface AWEMVChannelPlayerCardDanmakuController : AWEMVChannelPlayerCardBaseController
@property (nonatomic) <AWEDanmakuBaseControllerProtocol> danmakuController;
@property (nonatomic) <AWEDanmakuBaseContextProtocol> danmakuContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerWillLoopPlaying:;
- (void)player:didChangePlaybackToAction:;
- (void)bindEvent;
- (BOOL)shouldHandleDanmaKuTap:;
- (id)danmakuContext;
- (BOOL)isCurrentModelSupportMask;
- (void)setDanmakuContext:;
- (void)progressViewDidTouchEnded;
- (void)prepareBeforeTransition;
- (void)configAfterBackFromTransition;
- (void)configAfterUpdatePlayerControllerInWindowPlayStatus;
- (void)addDanmakuContainerView;
- (id)danmakuController;
- (BOOL)shouldShowDanmaku;
- (void)setDanmakuController:;
- (void)updateState:;
- (void)viewDidLoad;
- (id)playerController;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
