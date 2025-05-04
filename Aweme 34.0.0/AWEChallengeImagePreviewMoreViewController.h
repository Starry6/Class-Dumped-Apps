@interface AWEChallengeImagePreviewMoreViewController : UIViewController
@property (nonatomic) AWEChallengeModel model;
@property (nonatomic) UILabel uploadLabel;
@property (nonatomic) UILabel uploadDescLabel;
@property (nonatomic) NSString processId;
- (void)p_setupUI;
- (void)p_addNaviBar;
- (id)uploadLabel;
- (id)uploadDescLabel;
- (void)uploadChallengeImage_IMP:;
- (void)uploadChallengeImage:;
- (void)setUploadLabel:;
- (void)setUploadDescLabel:;
- (void)setModel:;
- (id)processId;
- (id)initWithModel:;
- (void)viewDidLoad;
- (void)setProcessId:;
- (id)model;
- (void).cxx_destruct;
+ (void)uploadChallengeHeaderImage:challengeID:completion:;
@end
