@interface AWELiveAcqCastSearchLiveStreamCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView liveTag;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) AWEAwemeModel model;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)liveTag;
- (void)setLiveTag:;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:;
- (void)__configComponents;
- (void)__refreshComponents;
- (void)__createLiveTag;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
