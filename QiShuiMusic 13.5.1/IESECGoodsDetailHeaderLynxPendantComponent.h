@interface IESECGoodsDetailHeaderLynxPendantComponent : IESECGoodsDetailHeaderFeatureComponent
@property (nonatomic) <IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (nonatomic) <IESECGoodsDetailHeaderStorageService> storage;
@property (nonatomic) IESECPdpHeaderLynxPendantView pendantView;
@property (nonatomic) q nowPage;
@property (nonatomic) Q nowVideoState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPendantView:;
- (void)setViewManager:;
- (long long)nowPage;
- (void)goodsDetailUpdateHeaderLynxPendant:goodsDetailUID:;
- (void)headerViewDidLoad;
- (void)headerViewDidScrollToMode:;
- (void)loadComponent;
- (unsigned long long)nowVideoState;
- (id)pendantView;
- (void)registerSelfService;
- (void)setNowPage:;
- (void)setNowVideoState:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (id)viewManager;
@end
