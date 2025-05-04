@interface AWEMomentTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AFDCloseFriendMomentTabViewControllerProtocol> momentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (id)storyTabComponent;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (id)momentVC;
- (id)closeFriendTabModel;
- (void)setMomentVC:;
- (id)user;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)title;
@end
