@interface AWEIMInviteFriendTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView inviteContainerView;
@property (nonatomic) AWEButton enterBtn;
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) UITapGestureRecognizer singleTapGes;
- (id)singleTapGes;
- (void)setSingleTapGes:;
- (void)trackLiveShow;
- (void)p_resetUI;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)inviteContainerView;
- (void)p_disableUserIntereactionIfNeeded;
- (BOOL)shouldReopenRoomWithClicked;
- (id)p_getCardViewTitleTextWithPart1:part2:isSubTitle:;
- (id)p_subtitleTextWithStatus:;
- (void)enterBtnTapped;
- (BOOL)p_isLiveRoomInvite;
- (BOOL)p_isOverRoomCache:;
- (id)p_linkDaysCache:;
- (id)p_linkIntervalCache:;
- (void)trackMsgShowWithMessage:;
- (void)p_requestRoomInfoWithCompletion:;
- (void)p_setLiveRoomOver:;
- (void)p_setLiveRoomWithID:linkDays:linkInterval:;
- (void)trackMsgWithEvent:;
- (void)p_reopenKTV;
- (id)roomPrivacyStatusForType:;
- (void)trackMsgWithEvent:message:;
- (void)setupInviteContainerView;
- (void)p_refreshUIWithResponse:;
- (id)p_titleFont;
- (id)p_subtitleFont;
- (void)p_disableEnterButton;
- (id)enterBtn;
- (void)p_refreshInteractionWithStatus:linkDays:linkInterval:;
- (void)setInviteContainerView:;
- (void)p_initTitleLabel:;
- (void)p_initSubtitlleLabel:;
- (void)p_disableEnterButtonIfNeeded;
- (void)p_enableEnterButton;
- (void)setEnterBtn:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
