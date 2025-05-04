@interface AWEFamiliarRecommendHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) UIViewController<AFDFamiliarRecommendWorkViewControllerProtocol> recommendVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (id)recommendVC;
- (void)setRecommendVC:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (id)familiarRecommendTabModel;
- (id)user;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear;
- (void)onInit;
@end
