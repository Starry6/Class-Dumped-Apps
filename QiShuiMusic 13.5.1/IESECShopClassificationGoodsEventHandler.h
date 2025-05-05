@interface IESECShopClassificationGoodsEventHandler : NSObject
@property (nonatomic) IESECShopGoodsState state;
@property (nonatomic) IESECShopContext legacyShopContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachState:;
- (void)clickEcommerceStoreSortWithType:ascending:;
- (id)legacyShopContext;
- (void)showSecondaryPage;
- (id)tracker;
- (void)setState:;
- (id)state;
- (void).cxx_destruct;
@end
