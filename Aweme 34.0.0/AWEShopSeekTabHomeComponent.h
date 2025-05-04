@interface AWEShopSeekTabHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) UIViewController<AWEShopSeekWorkViewControllerProtocol> shopSeekVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (id)shopSeekVC;
- (void)setShopSeekVC:;
- (void).cxx_destruct;
- (void)viewDidAppear;
@end
