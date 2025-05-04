@interface AWETeenStickerVideoListCell : UICollectionViewCell
@property (nonatomic) UIImageView videoCover;
@property (nonatomic) UIImageView userAvatar;
@property (nonatomic) AWEGradientView bottomMaskView;
@property (nonatomic) double userAvatarWidth;
- (void)configWithModel:;
- (id)userAvatar;
- (void)setBottomMaskView:;
- (id)bottomMaskView;
- (id)videoCover;
- (void)setVideoCover:;
- (void)p_setupViews;
- (void)setUserAvatarWidth:;
- (double)userAvatarWidth;
- (void)setUserAvatar:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
