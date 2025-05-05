@interface IESECGoodsDetailHeaderFeatureComponent : NSObject
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider serviceProvider;
@property (nonatomic) <IESECGoodsDetailHeaderContainerService> container;
@property (nonatomic) IESECGoodsDetailHeaderPendantModel model;
@property (nonatomic) q mode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)headerViewDidLoad;
- (void)headerViewDidScrollToMode:;
- (void)headerViewWillLoad;
- (void)loadComponent;
- (void)registerSelfService;
- (id)model;
- (void)setContainer:;
- (void)setModel:;
- (id)container;
- (void).cxx_destruct;
- (id)serviceProvider;
- (long long)mode;
- (void)setServiceProvider:;
- (void)setMode:;
- (id)initWithServiceProvider:;
@end
