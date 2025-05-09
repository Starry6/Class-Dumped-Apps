@interface IESLiveSaaSAvatarImageView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView borderView;
@property (nonatomic) UIImageView honorView;
@property (nonatomic) IESLiveSaaSAvatarWithoutEffectView withoutEffectView;
@property (nonatomic) IESLiveSaaSAvatarRotatingCircleView rotatingView;
@property (nonatomic) UIView tagView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) NSArray currentAvatarURLs;
@property (nonatomic) <IESLiveAvatarBorderItem> borderItem;
@property (nonatomic) BOOL borderHidden;
@property (nonatomic) BOOL honorHidden;
@property (nonatomic) BOOL disableBorder;
- (void)setHonorHidden:;
- (void)updateWithHonorURLs:borderURLs:;
- (BOOL)borderHidden;
- (id)borderItem;
- (id)currentAvatarURLs;
- (id)descLabel;
- (BOOL)disableBorder;
- (BOOL)honorHidden;
- (id)honorView;
- (void)renderUI;
- (id)rotatingView;
- (void)setBorderHidden:;
- (void)setBorderItem:;
- (void)setCurrentAvatarURLs:;
- (void)setDescLabel:;
- (void)setDisableBorder:;
- (void)setHonorSize:;
- (void)setHonorView:;
- (void)setRotatingView:;
- (void)setWithoutEffectView:;
- (void)startRotatingAnimation;
- (void)stopRotatingAniamtion;
- (void)updateUnusedEffect:;
- (void)updateWithAvatarURLs:;
- (void)updateWithAvatarURLs:honorURLs:borderURLs:;
- (void)updateWithBorder:;
- (void)updateWithBorder:useThumb:;
- (void)updateWithVerified;
- (void)updateWithVerified:;
- (id)withoutEffectView;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)borderView;
- (void)setBorderView:;
- (void)setBorderSize:;
- (id)tagView;
- (void)setTagView:;
@end
