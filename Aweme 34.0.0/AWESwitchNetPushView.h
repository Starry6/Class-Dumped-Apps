@interface AWESwitchNetPushView : UIView
@property (nonatomic) UIView contentBaseView;
@property (nonatomic) UIButton agreeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel rightTipLabel;
@property (nonatomic) <AWESwitchNetPushViewDelegate> delegate;
- (void)p_setupUI;
- (id)contentBaseView;
- (void)setContentBaseView:;
- (id)agreeButton;
- (void)setAgreeButton:;
- (id)rightTipLabel;
- (void)setRightTipLabel:;
- (id)delegate;
- (id)intrinsicContentSize;
- (id)initWithDelegate:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
