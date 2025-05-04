@interface AWEChallengeImagePreviewViewController : UIViewController
@property (nonatomic) AWEChallengeModel model;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) AWEButton shareButton;
@property (nonatomic) NSString processId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)onShareBtnClicked:;
- (void)p_addNaviBar;
- (BOOL)p_shouldAddShareButton;
- (void)onShareBtnClicked_IMP:;
- (void)setModel:;
- (id)processId;
- (id)initWithModel:;
- (void)viewDidLoad;
- (void)setProcessId:;
- (id)model;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setShareButton:;
- (id)shareButton;
@end
