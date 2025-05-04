@interface AWEStoryDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AFDProfileStoryWorkListViewControllerProtocol> storyVC;
@property (nonatomic) AWEProfileTabContainerViewController<AWEStoryTabContainerViewControllerProtocol> storyTabVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (void)transferToStoryTab;
- (void)removeMomentTab;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (id)storyTabVC;
- (id)storyVC;
- (id)storyTabModel;
- (void)updateLockIcon:;
- (void)setStoryVC:;
- (void)setStoryTabVC:;
- (id)user;
- (void).cxx_destruct;
- (void)onInit;
@end
