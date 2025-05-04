@interface AWEFeedNearbyCardCellViewController : AWEFeedCellViewController
@property (nonatomic) UIViewController<AWEFeedNearbyCardViewControllerProtocol> nearbyCardViewController;
- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)__setupUIIfNeeds;
- (id)nearbyCardViewController;
- (void)setNearbyCardViewController:;
- (void)play;
- (void).cxx_destruct;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
