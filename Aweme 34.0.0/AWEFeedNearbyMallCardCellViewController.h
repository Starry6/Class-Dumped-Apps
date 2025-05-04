@interface AWEFeedNearbyMallCardCellViewController : AWEFeedCellViewController
@property (nonatomic) UIViewController<AWEFeedNearbyMallCardProtocol> cardViewController;
- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)setCardViewController:;
- (id)cardViewController;
- (void).cxx_destruct;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
