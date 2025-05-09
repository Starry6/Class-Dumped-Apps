@interface AWEIMInviteFriendContentComponent : AWEIMFlexComponent
@property (nonatomic) NSNumber isRoomOverNum;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)onCellWillRenderForCurrentComponent;
- (void)trackLiveShow;
- (void)p_createSmallCardPresenter;
- (void)p_disableUserIntereactionIfNeeded;
- (id)inviteFriendMessage;
- (BOOL)shouldReopenRoomWithClicked;
- (id)p_getCardViewTitleTextWithPart1:part2:isSubTitle:;
- (id)p_subtitleTextWithStatus:;
- (void)enterBtnTapped;
- (BOOL)p_isLiveRoomInvite;
- (BOOL)p_isOverRoomCache:;
- (id)p_linkDaysCache:;
- (id)p_linkIntervalCache:;
- (void)p_refreshInteractionWithStatus:linkDays:linkInterval:needReload:;
- (void)trackMsgShowWithMessage:;
- (void)p_requestRoomInfoWithCompletion:;
- (void)p_setLiveRoomOver:;
- (void)p_setLiveRoomWithID:linkDays:linkInterval:;
- (void)trackMsgWithEvent:;
- (void)p_reopenKTV;
- (id)roomPrivacyStatusForType:;
- (void)trackMsgWithEvent:message:;
- (void)setIsRoomOverNum:;
- (id)isRoomOverNum;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
@end
