@interface AWEIMGroupAvatarEditViewController : UIViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) UIImageView groupAvatarImageView;
@property (nonatomic) UIImage beforeImage;
@property (nonatomic) @? imagePickedBlock;
@property (nonatomic) BOOL shouldNotTransferToSetting;
- (void)setBeforeImage:;
- (void)__backBtnClicked;
- (void)__setupUI;
- (id)beforeImage;
- (id)groupAvatarImageView;
- (id)imagePickedBlock;
- (void)setGroupAvatarImageView:;
- (void)setImagePickedBlock:;
- (void)setShouldNotTransferToSetting:;
- (BOOL)shouldNotTransferToSetting;
- (id)initWithImage:;
- (id)conversation;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setConversation:;
- (id)initWithConversation:;
@end
