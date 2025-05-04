@interface AWEUserSharedLoginLoadingViewController : UIViewController
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXLoadingParticleView particleView;
- (id)particleView;
- (void)setParticleView:;
- (id)init;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)titleLabelText;
@end
