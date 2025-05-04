@interface AWEVideoHallPannelNaviBarView : UIView
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UIButton backButton;
@property (nonatomic) @? backBtnBlock;
- (void)handleBackButton;
- (id)titleLable;
- (void)setTitleLable:;
- (void)setBackBtnBlock:;
- (id)backBtnBlock;
- (id)backButton;
- (id)init;
- (void)setBackButton:;
- (void).cxx_destruct;
- (void)setupUI;
@end
