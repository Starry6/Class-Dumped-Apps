@interface AWEUserRecommendCollectionViewFindMoreCell : AWEUserRecommendCollectionViewBaseCell
@property (nonatomic) UIImageView firstAvatarView;
@property (nonatomic) UIImageView secondAvatarView;
@property (nonatomic) UIView firstAvatarBackgroundView;
- (void)awe_themeReload;
- (void)configWithModel:;
- (void)onSelected;
- (id)secondAvatarView;
- (id)firstAvatarBackgroundView;
- (id)firstAvatarView;
- (void)p_setAvatarForUser:imageView:;
- (void)setFirstAvatarView:;
- (void)setSecondAvatarView:;
- (void)setFirstAvatarBackgroundView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
