@interface IESECLiveAvartarView : UIView
@property (nonatomic) {CGSize=dd} avatarSize;
@property (nonatomic) double centerGap;
@property (nonatomic) double blankWidth;
@property (nonatomic) BOOL showGap;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIImageView avatar;
- (BOOL)showGap;
- (void)updateURL:withPlaceholderImage:;
- (double)blankWidth;
- (double)centerGap;
- (id)gapMaskLayer;
- (void)setBlankWidth:;
- (void)setCenterGap:;
- (void)setShowGap:;
- (id)initWithURL:;
- (id)initWithFrame:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)avatar;
- (void)setAvatar:;
- (void)setupUI;
- (id)avatarSize;
- (void)setAvatarSize:;
- (void)updateUI;
@end
