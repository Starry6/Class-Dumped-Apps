@interface AWEIMChatListTableViewCell : UITableViewCell
@property (nonatomic) UILongPressGestureRecognizer longPressPopupGesture;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) IESIMUserNameLabel nameLabel;
@property (nonatomic) UILabel nameExtendedLabel;
@property (nonatomic) AWEIMMessageStateView messageStateView;
@property (nonatomic) AWEIMChatMessageLabel messageLabel;
@property (nonatomic) UILabel messageExtendedLabel;
@property (nonatomic) NSString timeText;
@property (nonatomic) AWEIMUnreadDotView unreadView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UIImageView verifiedLogoView;
@property (nonatomic) UIImageView nextTapImageView;
@property (nonatomic) AWEButton cameraBtn;
@property (nonatomic) UIButton greetBtn;
@property (nonatomic) UIButton engageGroupOwnerBtn;
@property (nonatomic) UIImageView muteImageView;
@property (nonatomic) UILabel draftLabel;
@property (nonatomic) UILabel mentionLabel;
@property (nonatomic) UILabel hightlightedLabel;
@property (nonatomic) BOOL hasSetupKVO;
@property (nonatomic) NSArray kvoKeyPaths;
@property (nonatomic) BOOL isMessageLabelShowingActiveState;
@property (nonatomic) @? refreshUserAvatarBlock;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEIMMessageStateIndicator messageStateIndicator;
@property (nonatomic) NSString accessibilityMessageLabel;
@property (nonatomic) IESIMSaaSLongPressModel longPressModel;
@property (nonatomic) <AWEIMChatListTableViewCellLayout> layout;
@property (nonatomic) AWEIMChatModel chat;
@property (nonatomic) <AWEIMChatListTableViewCellDelegate> delegate;
@property (nonatomic) NSString belongPageIdentifier;
@property (nonatomic) NSCache imageMemoryCache;
@property (nonatomic) AWEIMFansGroupOwnerLivingManager livingManager;
@property (nonatomic) AWEIMFansGroupOwnerAirborneManager airborneManager;
@property (nonatomic) AWEIMFansGroupCommerceCouponManager commerceCouponManager;
- (void)configWithChat:;
- (id)p_attributedContent:emojiImage:;
- (void)p_clickGreetBtn;
- (void)p_updateDisplayAttributeContent;
- (id)airborneManager;
- (void)p_updateMessageLabelDisplayText;
- (void)setHasSetupKVO:;
- (void)setKvoKeyPaths:;
- (void)__addAcessbilityLabel;
- (id)accessibilityMessageLabel;
- (void)addMessageExtendedLabel;
- (void)asyncGetStrangerConversationName:;
- (id)belongPageIdentifier;
- (id)cameraBtn;
- (BOOL)canReactToGes:;
- (id)chatBackgroundColor;
- (id)commerceCouponManager;
- (void)configForOfficialNormalChat:;
- (id)displayAttributeContent;
- (id)engageGroupOwnerBtn;
- (void)generateStrangerNameWithPeerUser:currentUser:completion:;
- (id)greetBtn;
- (void)handleTapAvatarGes:;
- (void)handleTapLivingAvatarGes:;
- (BOOL)hasSetupKVO;
- (id)hightlightedLabel;
- (void)iesim_themeReload;
- (id)imageMemoryCache;
- (BOOL)isCompanyAccount:;
- (BOOL)isMessageLabelShowingActiveState;
- (id)kvoKeyPaths;
- (id)livingManager;
- (id)longPressModel;
- (id)longPressPopupGesture;
- (void)longPressPopupGestureAction:;
- (id)mentionLabel;
- (id)messageExtendedLabel;
- (id)messageStateIndicator;
- (id)messageStateView;
- (id)muteImageView;
- (id)nameExtendedLabel;
- (id)nextTapImageView;
- (void)p_activeStateEnhance;
- (void)p_addGroupOwnerLivingKVO;
- (void)p_addKVOForChat:;
- (void)p_addSubscribeMuteKVO;
- (id)p_attributedContent:;
- (BOOL)p_chatForceShowMsgContent;
- (BOOL)p_chatShowUnreadHint;
- (void)p_clickCameraBtn;
- (void)p_clickEngageGroupOwnerBtn;
- (void)p_configRefreshUserAvatarBlock;
- (BOOL)p_currentIsLiving;
- (BOOL)p_enableLivingABTest;
- (BOOL)p_enableLivingConversation;
- (BOOL)p_enableShowLivingHint;
- (id)p_getGroupOwnerLivingHint;
- (id)p_getMessageAndMessageExtendedTimeLabelTextColor;
- (void)p_refreshUserAvatar;
- (void)p_refreshUserName;
- (void)p_removeKVOForChat:;
- (void)p_resetMessageLabel;
- (void)p_setNameExtendedLabelText:isOfficial:;
- (void)p_setupUI;
- (BOOL)p_shouldHideMessageLabel;
- (BOOL)p_shouldHideTimeLabel;
- (void)p_tryShowLivingHint;
- (void)p_updateAirborneMessage:;
- (void)p_updateCellTailVisibility;
- (void)p_updateCommerceCouponMessage:;
- (void)p_updateDraftLabelVisibilityWithHidden:;
- (void)p_updateEngageGroupOwnerHint;
- (void)p_updateLivingText;
- (void)p_updateMentionLabelVisibilityWithHidden:;
- (void)p_updateMessageLabel;
- (void)p_updateMessageLabelWithAirborneText:;
- (void)p_updateMessageLabelWithCommerceCouponText:;
- (void)p_updateMessageLabelWithOnlineInfo:;
- (void)p_updateRightIconVisibility;
- (void)p_updateTrackWithOnlineInfo:uid:;
- (id)refreshUserAvatarBlock;
- (void)setAccessibilityMessageLabel:;
- (void)setAirborneManager:;
- (void)setBelongPageIdentifier:;
- (void)setCameraBtn:;
- (void)setCommerceCouponManager:;
- (void)setEngageGroupOwnerBtn:;
- (void)setGreetBtn:;
- (void)setHightlightedLabel:;
- (void)setImageMemoryCache:;
- (void)setIsMessageLabelShowingActiveState:;
- (void)setLivingManager:;
- (void)setLongPressModel:;
- (void)setLongPressPopupGesture:;
- (void)setMentionLabel:;
- (void)setMessageExtendedLabel:;
- (void)setMessageStateIndicator:;
- (void)setMessageStateView:;
- (void)setMuteImageView:;
- (void)setNameExtendedLabel:;
- (void)setNextTapImageView:;
- (void)setRefreshUserAvatarBlock:;
- (void)setTimeText:;
- (void)setUnreadView:;
- (void)setVerifiedLogoView:;
- (void)showAirborneIfNeedUseCache:;
- (void)showCommerceCouponIfNeed;
- (BOOL)showUnreadCountViaHint;
- (id)unreadView;
- (void)updateActiveUserState;
- (void)updateChatExplain;
- (void)updateDisplayTextAccordingToUser:messageSenderOrRecallerVM:;
- (void)updateNewAwemeTip;
- (void)updateReadProgress;
- (void)updateUnreadCountWithModel:;
- (id)verftBadfeImageName;
- (id)verifiedLogoView;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)layoutSubviews;
- (id)avatarView;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setDelegate:;
- (void)setAvatarView:;
- (void)setLayout:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)prepareForReuse;
- (void)setHighlighted:animated:;
- (id)layout;
- (id)delegate;
- (void).cxx_destruct;
- (id)messageLabel;
- (void)setMessageLabel:;
- (id)nameLabel;
- (id)dotView;
- (void)setDotView:;
- (void)setNameLabel:;
- (id)lineView;
- (void)setLineView:;
- (void)setChat:;
- (id)chat;
- (id)timeText;
- (id)draftLabel;
- (void)setDraftLabel:;
@end
