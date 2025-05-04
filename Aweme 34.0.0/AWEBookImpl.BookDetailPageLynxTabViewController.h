@interface AWEBookImpl.BookDetailPageLynxTabViewController : UIViewController
@property (nonatomic) UIScrollView tabScrollView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} targetFrame;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:;
- (id)tabScrollView;
- (void)setTabScrollView:;
- (void)didPan;
- (void)isCurrentSheetFullScreenWithNotice:;
- (void)appWillResignActiveWithNotice:;
- (void)appDidBecomeActiveWithNotice:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setTargetFrame:;
- (id)targetFrame;
@end
