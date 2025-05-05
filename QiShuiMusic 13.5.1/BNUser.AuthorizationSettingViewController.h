@interface BNUser.AuthorizationSettingViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
- (id)etPageName;
- (id)etSceneName;
- (void)receivedWithNotification:;
- (void)dealloc;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
