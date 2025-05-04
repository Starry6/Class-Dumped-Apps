@interface AWEIMTwoAvatarClashViewPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSArray leftAvatarURLList;
@property (nonatomic) UIImage leftPlaceholderImage;
@property (nonatomic) UIColor leftBackgroundViewColor;
@property (nonatomic) NSArray rightAvatarURLList;
@property (nonatomic) UIImage rightPlaceholderImage;
@property (nonatomic) UIColor rightBackgroundViewColor;
@property (nonatomic) BOOL shouldShowAvatarWithoutAnimation;
@property (nonatomic) BOOL newStyle;
- (BOOL)newStyle;
- (void)setNewStyle:;
- (void)setLeftAvatarURLList:;
- (void)setRightAvatarURLList:;
- (void)setLeftBackgroundViewColor:;
- (void)setRightBackgroundViewColor:;
- (void)setShouldShowAvatarWithoutAnimation:;
- (void)setLeftPlaceholderImage:;
- (void)setRightPlaceholderImage:;
- (id)leftAvatarURLList;
- (id)leftPlaceholderImage;
- (id)rightAvatarURLList;
- (id)rightPlaceholderImage;
- (id)leftBackgroundViewColor;
- (id)rightBackgroundViewColor;
- (BOOL)shouldShowAvatarWithoutAnimation;
- (void).cxx_destruct;
@end
