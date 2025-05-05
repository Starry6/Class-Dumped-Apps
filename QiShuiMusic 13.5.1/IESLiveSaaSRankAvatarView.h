@interface IESLiveSaaSRankAvatarView : UIView
@property (nonatomic) UIImageView userAvatar;
@property (nonatomic) UIImageView edgeImage;
@property (nonatomic) UIImageView goldImage;
- (id)edgeImage;
- (id)goldImage;
- (void)setEdgeImage:;
- (void)setGoldImage:;
- (void)setUserAvatar:;
- (void)updateWithUserAvatar:edgeImageName:;
- (id)userAvatar;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
