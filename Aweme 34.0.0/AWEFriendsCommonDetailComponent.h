@interface AWEFriendsCommonDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) AWESocialRelationObserver mateStatusObserver;
@property (nonatomic) BOOL hasTrackedEnter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didChangePrivateRelationWithUser:relationType:relationValue:;
- (void)userDidTakeScreenshot:;
- (void)setMateStatusObserver:;
- (id)mateStatusObserver;
- (void)updateMateStatus:;
- (void)didReceiveMateApplyPush:;
- (BOOL)onConfigWithRouterParamDict:;
- (void)onDidRequestUser:error:;
- (void)trackEnter;
- (void)updateRecommendReasonIfNeeded;
- (BOOL)hasTrackedEnter;
- (void)setHasTrackedEnter:;
- (id)user;
- (id)userID;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)handleAppWillEnterForeground:;
@end
