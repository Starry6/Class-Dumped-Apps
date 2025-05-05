@interface IESECShopGoodsCartCtrl : MTLModel
@property (nonatomic) BOOL cartDisable;
@property (nonatomic) NSString cartClickToast;
@property (nonatomic) NSString cartExtraParams;
@property (nonatomic) BOOL isShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cartExtraParams;
- (void)setCartDisable:;
- (id)cartClickToast;
- (BOOL)cartDisable;
- (BOOL)enableNewStyleCart;
- (BOOL)isShow;
- (void)setCartClickToast:;
- (void)setCartExtraParams:;
- (void)setIsShow:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
