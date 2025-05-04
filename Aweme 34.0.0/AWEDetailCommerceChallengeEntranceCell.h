@interface AWEDetailCommerceChallengeEntranceCell : UICollectionViewCell
@property (nonatomic) AWEDetailCommerceChallengeModel model;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)p_setupUI;
- (void)configWithModel:serviceProvider:;
- (void)clickedChallengeEntrance:;
- (void)setModel:;
- (void)setProvider:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)touchesCancelled:withEvent:;
- (id)model;
- (void)setTitleLabel:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (id)provider;
- (id)descriptionLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
