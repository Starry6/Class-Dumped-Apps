@interface AWEIMLongPressFeedAwemeManager : NSObject
@property (nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> longPressVC;
- (id)shareConfigurationHandler;
- (id)longPressVC;
- (void)endControlServerContext:;
- (void)setLongPressVC:;
- (void)addPageIdentifierForTranspondIMShareModels:;
- (void)addPlayRemoteEntrance:awemeModel:;
- (void)handleFeedLongPressWithAwemeModel:;
- (void)showSharePanelWithAwemeModel:;
- (void).cxx_destruct;
@end
