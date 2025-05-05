@interface BNUser.STProfileViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) _TtC15BNSceneContract14STProfileParam param;
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)etSceneName;
- (id)initWithCoder:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
