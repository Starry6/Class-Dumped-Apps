@interface AWEProfileMusicDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> ostVC;
@property (nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> vsOriginalSoundVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (id)ostVC;
- (id)vsOriginalSoundVC;
- (id)musicianTabModel;
- (id)originalSoundTabModel;
- (BOOL)p_shouldShowMusicTab;
- (BOOL)p_shouldShowOriginalSoundTab;
- (id)titleForMusicianTab;
- (void)setOstVC:;
- (void)setVsOriginalSoundVC:;
- (id)user;
- (void).cxx_destruct;
- (void)viewDidAppear;
@end
