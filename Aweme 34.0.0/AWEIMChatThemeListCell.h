@interface AWEIMChatThemeListCell : UICollectionViewCell
@property (nonatomic) UIView imageViewContainer;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView imageViewBackground;
@property (nonatomic) UIView bottomContainer;
@property (nonatomic) UILabel themeTitle;
@property (nonatomic) UIImageView lockedView;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)themeTitle;
- (void)setThemeTitle:;
- (id)imageViewContainer;
- (void)setImageViewContainer:;
- (void)setCellSelected:;
- (id)lockedView;
- (void)setLockedView:;
- (id)imageViewBackground;
- (void)setImageViewBackground:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)bottomContainer;
- (void)setBottomContainer:;
@end
