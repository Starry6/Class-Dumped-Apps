@interface AWEMemoriesPlayerTopBarView : UIView
@property (nonatomic) ACCGradientView topBarGradientView;
@property (nonatomic) UIButton topBarCloseButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) NSObject<AWEMemoriesPlayerTopBarViewDelegate> delegate;
- (void)closeButtonClicked:;
- (void)loadConfigWithPlayerConfigManager:;
- (id)topBarCloseButton;
- (id)topBarGradientView;
- (void)setTopBarGradientView:;
- (void)setTopBarCloseButton:;
- (void)setRightButton:;
- (id)delegate;
- (id)initWithFrame:;
- (id)rightButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
