@interface BNPlay.ADVideoPlayItemViewController : BNPlay.BNBasicPlayItemController
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) BOOL etPageIgnored;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)etSceneName;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
