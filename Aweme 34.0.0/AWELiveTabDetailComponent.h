@interface AWELiveTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AWEUserProfileTabBaseMethod> liveVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (id)liveVC;
- (void)setLiveVC:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (id)liveTabModel;
- (id)user;
- (void).cxx_destruct;
- (void)onInit;
@end
