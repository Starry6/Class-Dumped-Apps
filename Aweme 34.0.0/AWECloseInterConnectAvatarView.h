@interface AWECloseInterConnectAvatarView : UIView
@property (nonatomic) UIImageView douyinImageView;
@property (nonatomic) UIImageView hotsoonImageView;
@property (nonatomic) UIImageView closeArrowImageView;
@property (nonatomic) UILabel douyinLabel;
@property (nonatomic) UILabel douyinSublabel;
@property (nonatomic) UILabel hotsoonLabel;
@property (nonatomic) UILabel hotsoonSublabel;
@property (nonatomic) UIImageView miniDouyinImageView;
@property (nonatomic) UIImageView miniHotsoonImageView;
- (void)configUI;
- (id)hotsoonImageView;
- (id)douyinImageView;
- (id)closeArrowImageView;
- (id)douyinLabel;
- (id)hotsoonLabel;
- (void)setDouyinImageView:;
- (void)setHotsoonImageView:;
- (void)setCloseArrowImageView:;
- (void)setDouyinLabel:;
- (void)setHotsoonLabel:;
- (id)miniDouyinImageView;
- (id)miniHotsoonImageView;
- (id)douyinSublabel;
- (id)hotsoonSublabel;
- (void)setDouyinImage:hotsoonImage:douyinNickName:hotsoonNickName:;
- (void)setDouyinImage:hotsoonImage:douyinNickName:hotsoonNickName:douyinfans:douyinfollows:hotsoonfans:hotsoonfollows:;
- (void)setDouyinSublabel:;
- (void)setHotsoonSublabel:;
- (void)setMiniDouyinImageView:;
- (void)setMiniHotsoonImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
