@interface BNPlay.LiveTabViewController : BNPlay.LiveBaseViewController
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etFromTab;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString customSceneName;
- (id)customSceneName;
- (id)etFromTab;
- (id)etGroupID;
- (id)etGroupType;
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
