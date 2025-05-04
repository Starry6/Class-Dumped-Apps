@interface AWEGrouponC2FeedModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (BOOL)lifeTabHasSmallLiveWindowWithPageType:;
- (id)lastVisibleCanInsertItemPathWithPageType:;
- (void)animateInsertContainerAwemeModel:index:allowApendMax:insertType:pageType:;
- (void)createC2FeedWithPageContext:;
- (id)c2FeedSectionWithPageType:;
- (id)getSectionLayoutConfigWithPageType:;
- (void)shouldShowSmallScreenWithRoomID:customSchema:scene:pageType:showComplete:;
- (void)shouldShowSmallScreenWithRoomID:customSchema:scene:smallLiveWindowTopPercent:pageType:showComplete:;
- (void)startAutoPlayType:source:pageType:;
- (void)restartAutoPlayWithPageType:;
- (void)pauseAutoPlayWithPageType:;
- (void)hideLiveSmallScreenWithPageType:;
- (id)feedVisibleCellsWithPageType:;
@end
