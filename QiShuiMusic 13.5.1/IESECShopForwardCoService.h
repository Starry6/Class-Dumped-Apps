@interface IESECShopForwardCoService : IESECShopService
@property (nonatomic) NSArray tabModelArray;
@property (nonatomic) NSArray currentTabContents;
@property (nonatomic) UIView rootView;
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) <IESECStoreContainerProtocol> container;
@property (nonatomic) IESECStoreContainerViewModel containerVM;
- (void)configForwardCoBottomTabView:;
- (void)configForwardCoContainer:;
- (void)configForwardCoContainerVM:;
- (void)configForwardCoContext:;
- (void)configForwardCoCurrentTabContents:;
- (void)configForwardCoPagerView:;
- (void)configForwardCoRootView:;
- (void)configForwardCoTabModelArray:withAnchoredTabID:;
- (id)containerVM;
- (id)currentTabContents;
- (void)loadForwardCoController:;
- (void)setCurrentTabContents:;
- (void)setTabModelArray:;
- (id)shopTabModelForTabKitTabModel:;
- (id)tabModelArray;
- (id)container;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)rootView;
- (id)pageContext;
@end
