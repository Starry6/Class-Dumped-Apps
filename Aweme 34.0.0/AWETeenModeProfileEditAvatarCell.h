@interface AWETeenModeProfileEditAvatarCell : UITableViewCell
@property (nonatomic) UIButton avatarButton;
@property (nonatomic) UIView viewMask;
@property (nonatomic) UIImageView cameraImageView;
@property (nonatomic) UIButton avatarSwitchButton;
@property (nonatomic) AWETeenModeProfileEditModel model;
@property (nonatomic) @? tapEditAvatarBlock;
- (id)cameraImageView;
- (void)setCameraImageView:;
- (id)viewMask;
- (void)setViewMask:;
- (id)avatarSwitchButton;
- (void)configCameraImageUseDarkThemeImage:;
- (id)tapEditAvatarBlock;
- (void)selectAvatar:;
- (void)setTapEditAvatarBlock:;
- (void)setAvatarSwitchButton:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)updateSubviews;
- (id)avatarButton;
- (void)setAvatarButton:;
+ (id)identifier;
@end
