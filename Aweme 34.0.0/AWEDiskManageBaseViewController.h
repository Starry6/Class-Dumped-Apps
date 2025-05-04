@interface AWEDiskManageBaseViewController : UIViewController
@property (nonatomic) DUXLoadingToast cleanLoading;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEDiskCleanViewModel viewModel;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)backBtnClick;
- (void)configNavigationBar;
- (void)observeDeleteDrafts;
- (void)moreBtnClick;
- (void)setCleanLoading:;
- (id)cleanLoading;
- (void)showCleanDraftToast;
- (void)gotoDraftBox;
- (void)alertWithCleanType:;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
