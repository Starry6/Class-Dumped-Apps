@interface AWEHPTopBarBaseEntranceItem : NSObject
@property (nonatomic) UIViewController<AWEHPHomeContainerViewControllerProtocol> containerVC;
@property (nonatomic) AWEFeedTopBarContainer topBarContainer;
@property (nonatomic) UIView feedContentView;
- (void)setContainerVC:;
- (id)containerVC;
- (id)feedContentView;
- (void)setFeedContentView:;
- (id)topBarContainer;
- (void)setTopBarContainer:;
- (void).cxx_destruct;
@end
