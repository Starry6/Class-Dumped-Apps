@interface BNPlay.ListenVideoTwoColumnViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)etSceneName;
- (void)dealloc;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
