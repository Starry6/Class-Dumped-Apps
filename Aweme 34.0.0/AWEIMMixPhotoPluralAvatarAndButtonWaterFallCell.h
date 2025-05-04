@interface AWEIMMixPhotoPluralAvatarAndButtonWaterFallCell : AWEIMMixPhotoButtonWaterFallCell
@property (nonatomic) UIView<IESIMMultiAvatarViewProtocol> multiAvatar;
@property (nonatomic) UILabel progressLabel;
- (void)configWithItem:;
- (id)multiAvatar;
- (void)setMultiAvatar:;
- (id)multiAvatarOptionWithPlaceholder:moreAvatarCount:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)progressLabel;
- (void)setProgressLabel:;
- (void)setupLayout;
+ (id)identifier;
@end
