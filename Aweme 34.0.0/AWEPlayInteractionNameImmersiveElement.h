@interface AWEPlayInteractionNameImmersiveElement : AWEPlayInteractionImmersiveElement
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel trailLabel;
@property (nonatomic) UIView actionView;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)trailLabel;
- (void)setTrailLabel:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)context;
- (id)actionView;
- (void)setIconImageView:;
- (void)tapHandler:;
- (void)setActionView:;
@end
