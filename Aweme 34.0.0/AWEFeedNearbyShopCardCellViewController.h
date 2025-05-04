@interface AWEFeedNearbyShopCardCellViewController : AWEFeedCellViewController
@property (nonatomic) AWEFeedNearbyShopCardViewController cardViewController;
- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)viewDidLoad;
- (void)setCardViewController:;
- (id)cardViewController;
- (void).cxx_destruct;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
