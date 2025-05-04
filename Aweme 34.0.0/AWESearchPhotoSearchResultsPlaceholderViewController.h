@interface AWESearchPhotoSearchResultsPlaceholderViewController : UIViewController
@property (nonatomic) AWEEcomSearchVacantView netWorkErrorView;
@property (nonatomic) AWEEcomSearchVacantView searchEmptyView;
@property (nonatomic) @? reloadButtonClickCallback;
- (void)setIsSevenPage:;
- (void)setReloadButtonClickCallback:;
- (id)reloadButtonClickCallback;
- (id)searchEmptyView;
- (id)netWorkErrorView;
- (void)setSearchEmptyView:;
- (void)setNetWorkErrorView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setState:;
- (void)setupUI;
@end
