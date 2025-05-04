@interface AWEPlayInteractionMusicInfoElementViewModel : AWEPlayInteractionBaseElementViewModel
@property (nonatomic) AWEDetailManager detailManager;
- (id)detailManager;
- (void)setDetailManager:;
- (void)interactor_onMusicInfoLabelClicked:trackerDict:;
- (void)router_enterMusicDetailWithRouterDict:;
- (void)enterMusicDetailWithTrackerDict:;
- (void)enterDuetSingRecordingPage;
- (void)shootSameStyleMusicFormFollowShootAnchor;
- (void)onMusicInfoViewClicked_IMP:;
- (id)routerMusicDetailImplWithCommonConfig;
- (id)commonRepostParamsOnMusicInfoLabelClickedWith:;
- (void)trackAdEvent:;
- (void)router_enterMusicDetailWithRouterDict:musicModel:enterSimilarDetailPage:;
- (void).cxx_destruct;
@end
