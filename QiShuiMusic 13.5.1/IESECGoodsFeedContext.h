@interface IESECGoodsFeedContext : IESECContext
@property (nonatomic) <IESECGoodsFeedContainerProtocol> container;
@property (nonatomic) IESECGoodsDetailParameters globalParameters;
@property (nonatomic) UIView rootView;
@property (nonatomic) IESECGoodsDetailTracker tracker;
@property (nonatomic) IESECGoodsFeedQualityTracker qualityTracker;
@property (nonatomic) q maximumDisplayDepth;
@property (nonatomic) q goodsCardCount;
@property (nonatomic) NSMutableArray productsHaveBeenDisplayed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)goodsCardCount;
- (id)initWithParams:targetVC:rootView:;
- (long long)maximumDisplayDepth;
- (id)productsHaveBeenDisplayed;
- (id)qualityTracker;
- (void)setGoodsCardCount:;
- (void)setMaximumDisplayDepth:;
- (void)setProductsHaveBeenDisplayed:;
- (void)setQualityTracker:;
- (void)updateGlobalParams:;
- (void)setTracker:;
- (void)setContainer:;
- (id)tracker;
- (id)container;
- (void).cxx_destruct;
- (id)rootView;
- (void)setRootView:;
- (id)globalParameters;
- (void)setGlobalParameters:;
@end
