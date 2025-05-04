@interface AWEProfileVSTabHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) UIViewController<AWELiveVSTabViewControllerProtocol> vsProgramVC;
@property (nonatomic) double startEnterTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFloatFormatViewAlpha:;
- (void)updateTopCategoryViewContentBackgroundColor:;
- (void)updateVSProgramVCBackgroundColor:;
- (void)onTabList:didScroll:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (void)setStartEnterTime:;
- (void)trackVSStaytimeIfNeed;
- (id)vsProgramVC;
- (BOOL)p_isVsOfficialAccount;
- (double)startEnterTime;
- (void)setVsProgramVC:;
- (void)p_trackVSEntranceIfNeed;
- (void)removeAll;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)onInit;
@end
