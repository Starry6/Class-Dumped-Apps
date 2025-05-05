@interface IESECLiveSKUManager : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) UIView<IESECSKUViewProtocol> skuView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skuView;
- (void)addToCartClick:skuInfo:;
- (void)backClick:skuInfo:;
- (void)confirmClick:skuInfo:;
- (void)confirmClick:skuInfo:couponId:;
- (void)detailClick:skuInfo:;
- (void)dismissSKUView;
- (void)openCouponPanel:skuInfo:;
- (void)openSKUFromCart:callback:;
- (void)openSimpleURL:skuInfo:;
- (void)setIsShowing:;
- (void)setSkuView:;
- (void)skuInfoToCart:completion:;
- (id)callback;
- (void)setCallback:;
- (id)init;
- (BOOL)isShowing;
- (void).cxx_destruct;
+ (id)getInstance;
@end
