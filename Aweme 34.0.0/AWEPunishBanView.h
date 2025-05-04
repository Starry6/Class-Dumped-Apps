@interface AWEPunishBanView : UIView
@property (nonatomic) UIView sepView;
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) UIImageView arrowView;
- (id)sepView;
- (void)setSepView:;
- (void)__setupUI;
- (void)__trackEnterEvent;
- (void)__configDescriptionLabel;
- (void)__openPunishDetailVC;
- (id)user;
- (void)setUser:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)arrowView;
- (void)setArrowView:;
- (void)updateWithUser:;
@end
