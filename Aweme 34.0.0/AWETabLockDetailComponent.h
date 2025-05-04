@interface AWETabLockDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) q collectsTotalStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateTrailingIconWithImage:index:;
- (void)updateTrailingIconWithoutAnimationWithImage:index:;
- (long long)collectsTotalStatus;
- (void)setCollectsTotalStatus:;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (void)addLocksToTabWithNoti:;
- (void)addLocksToTab;
- (void)updateLikeLock;
- (BOOL)shouldShowFavoriteTabLock;
- (BOOL)shouldIgnoreInDynamicLock:;
- (BOOL)canShowLockIconWithIndex:;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)onInit;
@end
