@interface IESECShopGoodsErrorHandler : NSObject
@property (nonatomic) IESECShopGoodsState state;
@property (nonatomic) IESECShopContext legacyShopContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachState:;
- (id)legacyShopContext;
- (void)reportWithError:;
- (void)setState:;
- (id)state;
- (void).cxx_destruct;
@end
