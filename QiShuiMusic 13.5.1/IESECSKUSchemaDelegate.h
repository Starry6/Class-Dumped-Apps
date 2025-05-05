@interface IESECSKUSchemaDelegate : NSObject
@property (nonatomic) <IESECSKUServiceProtocol> outerDelegate;
@property (nonatomic) IESECSKUShowRequest showRequest;
@property (nonatomic) <IESECSKUContextProtocol> skuContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowRequest:;
- (void)skuViewDidShow:;
- (void)addToCartClick:skuInfo:;
- (void)backClick:skuInfo:;
- (void)confirmClick:skuInfo:;
- (void)confirmClick:skuInfo:couponId:;
- (id)initWithOuterDelegate:showRequest:skuContext:;
- (id)outerDelegate;
- (void)selectedSpecsChanged:skuInfo:;
- (void)setOuterDelegate:;
- (void)setSkuContext:;
- (id)showRequest;
- (id)skuContext;
- (void)skuNumChanged:skuInfo:;
- (void)skuViewDidDismiss:;
- (void)skuViewWillDismiss:;
- (void)skuViewWillShow:;
- (void).cxx_destruct;
@end
