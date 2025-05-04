@interface AWEDislikeTwoButtonView : UIView
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) <AWEDislikeTwoButtonViewDelegate> delegate;
- (void)setTitle:index:;
- (double)guideButtonInterval;
- (void)leftButtonDidClicked:;
- (void)rightButtonDidClicked:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)init;
- (id)delegate;
- (id)leftButton;
- (void)setup;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
