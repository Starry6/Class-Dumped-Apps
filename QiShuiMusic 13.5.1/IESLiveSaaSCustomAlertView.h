@interface IESLiveSaaSCustomAlertView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) NSArray actions;
- (id)createButtonWithTitle:textColor:actionBlock:;
- (id)initWithFrame:title:content:actions:;
- (void)p_setupUI;
- (void)setActions:;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (id)actions;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
+ (void)showAlertViewWithTitle:content:inView:actions:;
@end
