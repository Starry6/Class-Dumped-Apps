@interface AWERelationListViewController : AWEBaseListViewController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL refreshing;
@property (nonatomic) AWEFollowListPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)initWithContext:;
- (id)loadingView;
- (void).cxx_destruct;
- (BOOL)refreshing;
- (void)setRefreshing:;
- (void)showLoadingView;
- (void)setPageContext:;
- (id)pageContext;
- (void)hideLoadingView;
@end
