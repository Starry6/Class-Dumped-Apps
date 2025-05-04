@interface AWEMemoriesPlayerBottomBarView : UIView
@property (nonatomic) UIView leftContainerView;
@property (nonatomic) UIView rightContainerView;
@property (nonatomic) ACCAnimatedButton publishButton;
- (id)leftContainerView;
- (id)rightContainerView;
- (void)setRightContainerView:;
- (id)publishButton;
- (void)setPublishButton:;
- (void)setLeftContainerView:;
- (void)viewWillAppearWithConfigManager:;
- (void)configWithPlayerConfigManager:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
