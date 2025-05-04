@interface AWESearchScanFromGeneralViewController : UIViewController
@property (nonatomic) AWESearchScanResultViewController scanResultVC;
@property (nonatomic) NSDictionary mmobjectTagDict;
@property (nonatomic) AWESearchScanDataContext dataContext;
- (BOOL)configWithRouterParamDict:;
- (id)dataContext;
- (id)initWithDataContext:;
- (void)setDataContext:;
- (void)setMmobjectTagDict:;
- (id)mmobjectTagDict;
- (id)scanResultVC;
- (void)setScanResultVC:;
- (void)requestData;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)createUI;
@end
