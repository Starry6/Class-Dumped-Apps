@interface AWEDitoLynxSubPageViewController : UIViewController
@property (nonatomic) AWEPOILynxContainerView lynxView;
@property (nonatomic) BOOL shouldReceiveMultiTabEvent;
@property (nonatomic) <DitoMultiTabContainerProtocol> container;
@property (nonatomic) DitoMultiTabDataModel pageModel;
@property (nonatomic) BOOL isDitoSubPage;
@property (nonatomic) <DitoDataSupplierProtocol> multiTabDataSupplier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxView;
- (id)pageModel;
- (void)setPageModel:;
- (void)setLynxView:;
- (id)extraParamsForLynxView;
- (void)registerLynxCallBack;
- (void)setShouldReceiveMultiTabEvent:;
- (id)multiTabDataSupplier;
- (BOOL)shouldReceiveMultiTabEvent;
- (BOOL)isDitoSubPage;
- (void)setIsDitoSubPage:;
- (void)setMultiTabDataSupplier:;
- (void)configWithDitoMultiTabDataModel:;
- (void)subPageDidMoveToContainer:;
- (void)DitoMultiTabContainer:willMoveToTabModel:fromTabModel:;
- (void)DitoMultiTabContainerDidScroll:;
- (void)DitoMultiTabContainer:didMoveToTabModel:;
- (void)setContainer:;
- (id)container;
- (void)viewWillDisappear:;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
