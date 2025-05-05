@interface BNPlay.AudioPlayItemViewController : BNPlay.BNBasicPlayItemController
@property (nonatomic) NSString etPageName;
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) NSString etSceneName;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)etSceneName;
- (void)dealloc;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
