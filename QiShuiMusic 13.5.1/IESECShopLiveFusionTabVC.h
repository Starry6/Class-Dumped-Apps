@interface IESECShopLiveFusionTabVC : UIViewController
@property (nonatomic) @? scrollCallback;
@property (nonatomic) UIView rootView;
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) <IESECStoreContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabScrollViewDidScrollCallback:;
- (id)initWithPageContext:;
- (void)reportRenderFinish;
- (id)scrollCallback;
- (void)setScrollCallback:;
- (id)tabScrollViews;
- (void)updateTabContentView:;
- (void)updateTabScrollView:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)rootView;
- (void)setRootView:;
- (id)pageContext;
- (void)setPageContext:;
@end
