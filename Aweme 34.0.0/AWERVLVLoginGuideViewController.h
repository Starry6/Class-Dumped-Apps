@interface AWERVLVLoginGuideViewController : UIViewController
@property (nonatomic) DUXVacantView vacantView;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) @? scrollViewDidScroll;
@property (nonatomic) @? loginCompletion;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requireLogin;
- (id)vacantView;
- (void)setVacantView:;
- (void)setScrollViewDidScroll:;
- (void)setLoginCompletion:;
- (id)loginCompletion;
- (void)setScrollView:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)scrollView;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (id)scrollViewDidScroll;
- (void)setPageContext:;
- (id)pageContext;
@end
