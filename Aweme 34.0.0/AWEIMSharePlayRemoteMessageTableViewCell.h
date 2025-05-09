@interface AWEIMSharePlayRemoteMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView inviteContainerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) AWEButton enterBtn;
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)anchorEndLiveWithConfig:;
- (void)configWithMessage:;
- (void)p_refreshUIWithStatus:;
- (id)menuTargetView;
- (id)inviteContainerView;
- (void)p_requestRoomStatusWithRoomID:completion:;
- (id)p_getCardViewTitleTextWithPart1:part2:isSubTitle:;
- (id)p_subtitleTextWithStatus:;
- (void)enterBtnTapped;
- (void)p_requestRoomInfoWithCompletion:;
- (id)enterBtn;
- (void)setInviteContainerView:;
- (void)setEnterBtn:;
- (void)p_refreshNewCardWithReopenIfNeeded;
- (void)p_reopenPlayRemoteRoom;
- (id)p_roomPrivacyStatus:;
- (void)p_setLiveRoomStatusWithID:roomStatus:linkDays:linkInterval:;
- (void)p_updatePlayRoomMessageFromIMStorage;
- (void)p_refreshTitleIfNeeded;
- (void)p_refreshOldCardIfNeeded;
- (void)prepareForReuse;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)menuItems;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
- (id)logoImageView;
- (void)setLogoImageView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
