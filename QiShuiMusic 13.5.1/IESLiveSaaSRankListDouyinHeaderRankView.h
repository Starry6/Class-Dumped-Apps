@interface IESLiveSaaSRankListDouyinHeaderRankView : UIView
@property (nonatomic) q rank;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView avatarContainer;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView backgroundImageView;
- (id)initWithRank:;
- (void)updateModel:type:;
- (id)backgroundImageView;
- (void)setTitleLabel:;
- (id)avatarView;
- (void)setAvatarView:;
- (long long)rank;
- (void).cxx_destruct;
- (void)setRank:;
- (id)titleLabel;
- (void)setBackgroundImageView:;
- (id)avatarContainer;
- (void)setAvatarContainer:;
@end
