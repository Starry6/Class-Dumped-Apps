@interface AWEEmptyRecommendTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AWEEmptyRecommendViewControllerProtocol> emptyRecommendVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (id)emptyRecommendVC;
- (void)setEmptyRecommendVC:;
- (void)update;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (void)onInit;
@end
