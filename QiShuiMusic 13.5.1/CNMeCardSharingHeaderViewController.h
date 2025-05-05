@interface CNMeCardSharingHeaderViewController : UIViewController
@property (nonatomic) CNMeCardSharingAvatarViewController avatarViewController;
@property (nonatomic) NSString name;
@property (nonatomic) Q mode;
@property (nonatomic) CNMeCardSharingPickerLayoutAttributes layoutAttributes;
@property (nonatomic) UILabel nameLabel;
- (void)setName:;
- (void)setLayoutAttributes:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)layoutAttributes;
- (id)name;
- (unsigned long long)mode;
- (id)nameLabel;
- (void)setMode:;
- (void)viewDidLoad;
- (void)setNameLabel:;
- (id)initWithAvatarViewController:name:layoutAttributes:;
- (double)desiredHeight;
- (id)avatarViewController;
- (void)setAvatarViewController:;
@end
