@interface IESECAddToCartResponse : IESECBaseApiModel
@property (nonatomic) NSString msg;
@property (nonatomic) NSString cartID;
@property (nonatomic) NSNumber cartNum;
- (id)cartNum;
- (id)cartID;
- (void)setCartID:;
- (void)setCartNum:;
- (void).cxx_destruct;
- (id)msg;
- (void)setMsg:;
+ (id)JSONKeyPathsByPropertyKey;
@end
