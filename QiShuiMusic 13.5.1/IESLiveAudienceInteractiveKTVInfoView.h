@interface IESLiveAudienceInteractiveKTVInfoView : UIView
@property (nonatomic) UIImageView ktvIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel inviteStatusLabel;
- (id)ktvIcon;
- (id)inviteStatusLabel;
- (void)setInviteStatusLabel:;
- (void)setKtvIcon:;
- (void)setupConstraints;
- (id)init;
- (void)setTitleLabel:;
- (void)setDescriptionLabel:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
- (void)updateWithModel:;
@end
