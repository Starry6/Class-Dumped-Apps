@interface AWEAvatarNicknameEditViewController : UIViewController
@property (nonatomic) AWERegisterPageInfoCollectTopView topView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel addAvatarLabel;
@property (nonatomic) UITextField nickNameTextField;
@property (nonatomic) DYLoginNextActionButton finishButton;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView maskView;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarURI;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) Q platform;
@property (nonatomic) BOOL isProfileUpdate;
@property (nonatomic) BOOL updateUserProfile;
@property (nonatomic) q clickAvatarOrNickname;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)skipAction;
- (void)setFinishButton:;
- (id)finishButtonTitle;
- (void)avatarAction;
- (void)finishAction;
- (void)configTopView;
- (id)avatarURI;
- (void)setAvatarURI:;
- (void)setUpdateUserProfile:;
- (id)trackBioResultParams;
- (id)trackFinishParams;
- (BOOL)updateUserProfile;
- (BOOL)isProfileUpdate;
- (void)setIsProfileUpdate:;
- (id)addAvatarLabel;
- (id)nickNameTextField;
- (void)updateFinishButtonState;
- (void)handlePickedImage:;
- (void)hasKeyBoardUI:;
- (void)setNoKeyBoardUI;
- (void)showImagePicker;
- (void)setClickAvatarOrNickname:;
- (id)trackClickParams;
- (void)routeToNextPage;
- (long long)clickAvatarOrNickname;
- (void)clearTextFieldAction;
- (void)setAddAvatarLabel:;
- (void)setNickNameTextField:;
- (void)keyboardWillHide:;
- (void)textFieldDidEndEditing:;
- (void)setDeleteButton:;
- (id)maskView;
- (BOOL)isSmallScreen;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (void)setNickName:;
- (id)iconImageView;
- (id)deleteButton;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setMaskView:;
- (void)setPlatform:;
- (id)nickName;
- (void)keyboardWillShow:;
- (void)textFieldDidBeginEditing:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)topView;
- (void)setIconImageView:;
- (void)setAvatarImage:;
- (void)setupUI;
- (id)avatarImageView;
- (id)avatarImage;
- (void)setAvatarImageView:;
- (void)setTopView:;
- (id)finishButton;
@end
