@interface AWELeftSideBarEntranceAbilityManager : NSObject
@property (nonatomic) AWELeftSideBarManager leftSideBarManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftSideBarManager;
- (void)setLeftSideBarManager:;
- (id)initWithLeftSideBarManager:;
- (BOOL)checkBussinessManagerInvalid:;
- (BOOL)shouldConsumeDotBadgeWithBusinessID:;
- (void)p_showLeftSideBarBusinessEntranceBadgeWithPresenter:withModel:showCallBack:hideCallBack:downgradeCallBack:;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:withHideType:withIsNumerical:withCompletion:;
- (void)p_leftSideBarBusinessEntranceTryResumeBadgeAndCheckResult:withBusinessId:componentID:badgeCallContext:;
- (BOOL)p_canReUseComponentWithCurTask:newTask:;
- (void)showLeftSideBarBusinessEntranceBadgeWithPresenter:withModel:showCallBack:hideCallBack:downgradeCallBack:;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:withHideType:withCompletion:;
- (void)consumeLeftSideBarEntranceViewAllBusinessInfo;
- (void)consumeBadgeWithIdentification:;
- (void)clearLeftSideBarEntranceViewAllBusinessInfo;
- (void)reloadLeftSideBarEntranceViewAllBusinessInfo;
- (void)clearLeftSideBarEntranceViewAllRedDot;
- (void)clearDotBadgeWithIdentification:;
- (void)forceRemoveSelf:;
- (void)updateLeftSideBarEntranceBadgeIfNeed;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:withIsNumerical:withCompletion:;
- (void).cxx_destruct;
@end
