@interface AWERVLVAppointmentView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel title;
@property (nonatomic) UIView seperatorView;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) UIButton appointmentButton;
@property (nonatomic) <AWERVLVAppointmentViewDelegate> delegate;
- (void)didClickedButton:;
- (id)appointmentButton;
- (void)setAppointmentButton:;
- (void)configWithTitle:subTitle:;
- (void)setAppointmentState:;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setContainerView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)title;
- (void)setDelegate:;
- (void)setTitle:;
- (void)setIconImageView:;
- (void)setupUI;
- (id)seperatorView;
- (void)setSeperatorView:;
@end
