@interface AWEFeedGoodProductsCardCellViewController : AWEFeedCellViewController
@property (nonatomic) UIViewController<AWEECFeedGoodsCardViewControllerProtocol> cardViewController;
@property (nonatomic) AWEAVPlayerWrapper player;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerWrapper:didChangePlayStatus:;
- (void)pauseMusic;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)__setupUIIfNeeds;
- (void)viewWillDisappear:;
- (void)play;
- (void)viewDidLoad;
- (void)setCardViewController:;
- (id)cardViewController;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)configureWithModel:;
- (void)playMusic;
- (void)willDisplay;
@end
