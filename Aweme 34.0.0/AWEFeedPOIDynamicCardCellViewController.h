@interface AWEFeedPOIDynamicCardCellViewController : AWEFeedCellViewController
@property (nonatomic) AWEDynamicCardContext dcardContext;
@property (nonatomic) NSError loadError;
@property (nonatomic) BOOL pageSelected;
@property (nonatomic) BOOL didAppeared;
@property (nonatomic) double timeDidDisplay;
@property (nonatomic) UIView<AWEPOIDynamicCardProtocol> dcard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)didDisplay;
- (void)applicationEnterBackground;
- (id)modelForPlayer:;
- (void)applicationBecomeActive;
- (id)dcardManager;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)feedTableViewCellDidEndScroll:;
- (BOOL)didAppeared;
- (id)dcard;
- (BOOL)pageSelected;
- (void)trackCompensateDisplayEvent:;
- (void)setDidAppeared:;
- (void)setPageSelected:;
- (void)setTimeDidDisplay:;
- (void)trackLifeServiceCardShow;
- (double)timeDidDisplay;
- (void)setDcard:;
- (void)skipCard;
- (id)dcardContext;
- (void)setDcardContext:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (id)loadError;
- (void)viewDidAppear:;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)setLoadError:;
@end
