@interface AWELeftSideBarMoreFunctionBottomView : UIView
@property (nonatomic) DUXButton backButton;
@property (nonatomic) UIView lineView;
@property (nonatomic) <AWELeftSideBarMoreFunctionBottomViewDelegate> delegate;
- (void)initBackButton;
- (void)initLineView;
- (void)onClickBackButton;
- (id)backButton;
- (id)delegate;
- (void)setBackButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
@end
