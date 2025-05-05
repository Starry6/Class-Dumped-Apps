@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController
@property (nonatomic) NSString headerTitle;
@property (nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController avatarCarouselController;
@property (nonatomic) Q mode;
@property (nonatomic) CNMeCardSharingPickerLayoutAttributes layoutAttributes;
@property (nonatomic) UILabel headerLabel;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void)setLayoutAttributes:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)layoutAttributes;
- (unsigned long long)mode;
- (void)setMode:;
- (void)viewDidLoad;
- (id)initWithAvatarCarouselViewController:headerTitle:layoutAttributes:;
- (id)avatarCarouselController;
- (void)setAvatarCarouselController:;
- (id)headerLabel;
- (void)setHeaderLabel:;
+ (double)heightForHeaderWithContainerSize:withTitle:layoutAttributes:hasAvatar:;
@end
