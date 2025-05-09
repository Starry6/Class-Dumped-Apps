@interface AWEIMChatModel : NSObject
@property (nonatomic) AWEIMUser liveCustomServiceTargetUser;
@property (nonatomic) NSString liveCustomServiceConName;
@property (nonatomic) NSURL liveCustomServiceConAvatar;
@property (nonatomic) NSNumber hasRequestedLiveCustomHintUserInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMRecommendGroupItem recommendGroupItem;
@property (nonatomic) @? customizedAvatarGettingBlock;
@property (nonatomic) Q rightTailType;
@property (nonatomic) NSString peerID;
@property (nonatomic) NSString secPeerID;
@property (nonatomic) AWEIMUser peerUser;
@property (nonatomic) BOOL isCurrentUserAParticipant;
@property (nonatomic) NSString creatorUid;
@property (nonatomic) NSDate createTime;
@property (nonatomic) NSString ownerUid;
@property (nonatomic) BOOL isLiveFansGroupOrContentCreatorFansGroup;
@property (nonatomic) NSString groupTypeForTracking;
@property (nonatomic) BOOL showedChatExplain;
@property (nonatomic) NSString im_customString;
@property (nonatomic) <IESIMStrangerConversationProtocol> strangerConversation;
@property (nonatomic) AWEIMChatListServiceModel serviceModel;
@property (nonatomic) NSString serviceUid;
@property (nonatomic) BOOL requestingUser;
@property (nonatomic) AWEIMUser peerUser;
@property (nonatomic) NSString creatorUid;
@property (nonatomic) NSString ownerUid;
@property (nonatomic) NSDate createTime;
@property (nonatomic) BOOL isLiveFansGroupOrContentCreatorFansGroup;
@property (nonatomic) NSString groupTypeForTracking;
@property (nonatomic) NSNumber internalExposeTimestamp;
@property (nonatomic) NSNumber internalExposeTimes;
@property (nonatomic) q diffVersion;
@property (nonatomic) NSString secPeerID;
@property (nonatomic) BOOL lastMessageNoNotificationReg;
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) double updateDate;
@property (nonatomic) double cellSortTime;
@property (nonatomic) q chatScene;
@property (nonatomic) NSString sessionId;
@property (nonatomic) q type;
@property (nonatomic) q serviceType;
@property (nonatomic) AWEIMChatSnapShotModelForPresenter snapShotModelForPresenter;
@property (nonatomic) q status;
@property (nonatomic) Q group;
@property (nonatomic) NSString name;
@property (nonatomic) NSString nameForKVO;
@property (nonatomic) NSURL avatar;
@property (nonatomic) NSURL avatarForKVO;
@property (nonatomic) IESIMURLModel avatarURLModel;
@property (nonatomic) AWEIMMessage latestMessage;
@property (nonatomic) AWEIMMessage latestHintMessage;
@property (nonatomic) AWEIMMessagePropertyItem latestEmojiPropertyItem;
@property (nonatomic) AWEIMMessage latestEmojiProperItemBindMessage;
@property (nonatomic) AWEIMChatInputTextDraftModel inputTextDraft;
@property (nonatomic) q unreadCount;
@property (nonatomic) q realUnreadCount;
@property (nonatomic) q threadUnreadCount;
@property (nonatomic) q dotUnreadCount;
@property (nonatomic) BOOL enableSubscribeUnreadCountOnMute;
@property (nonatomic) q subscribeUnreadCountOnMute;
@property (nonatomic) q unreadMention;
@property (nonatomic) q unreadMentionMask;
@property (nonatomic) Q awemeCount;
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString hintOptDisplayText;
@property (nonatomic) NSString pushOptDisplayText;
@property (nonatomic) NSString emojiReplyDisplayText;
@property (nonatomic) Q chatFlag;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) Q participantsCount;
@property (nonatomic) NSString commerceSence;
@property (nonatomic) q explainType;
@property (nonatomic) NSString explainText;
@property (nonatomic) BOOL isAddressBookExplain;
@property (nonatomic) NSString labelText;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) q unreadType;
@property (nonatomic) q boxType;
@property (nonatomic) BOOL businessChat;
@property (nonatomic) BOOL mentioned;
@property (nonatomic) BOOL currentGroupIsBanned;
@property (nonatomic) BOOL isAuthorService;
@property (nonatomic) BOOL hasNew;
@property (nonatomic) BOOL isMute;
@property (nonatomic) NSString subscribeArticleID;
@property (nonatomic) NSString subscribeCardID;
@property (nonatomic) BOOL bottomConversation;
@property (nonatomic) BOOL notDeliveryUnread;
@property (nonatomic) NSDictionary interactNoticeTrackerParams;
@property (nonatomic) NSNumber awemeCreateTimestamp;
@property (nonatomic) NSString officialRoleTag;
@property (nonatomic) NSString consultingTagsArrayInJson;
@property (nonatomic) q landingGroup;
@property (nonatomic) double cancelStickTopTime;
@property (nonatomic) q exchangeCameraDisplayStatus;
@property (nonatomic) BOOL shouldBeConsideredAsNoticeWhenSorting;
@property (nonatomic) BOOL isBoldLatestMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (void)setParticipantsCount:;
- (BOOL)stickOnTop;
- (void)setStickOnTop:;
- (BOOL)isFansGroup;
- (BOOL)isCurrentUserAParticipant;
- (id)serviceModel;
- (id)peerUser;
- (void)setCustomizedAvatarGettingBlock:;
- (void)setAvatarURLModel:;
- (void)setPeerUser:;
- (void)setPeerUser:;
- (void)setLatestMessage:;
- (void)setExplainText:;
- (id)creatorUid;
- (long long)boxType;
- (long long)threadUnreadCount;
- (long long)subscribeUnreadCountOnMute;
- (long long)unreadMentionMask;
- (BOOL)bottomConversation;
- (BOOL)notDeliveryUnread;
- (void)updateChatDiffHash;
- (void)setSchemaURL:;
- (id)schemaURL;
- (void)setIsMute:;
- (void)setBoxType:;
- (void)requestUserInfo;
- (unsigned long long)awemeCount;
- (void)setAwemeCount:;
- (BOOL)isVerifiedEnterprise;
- (long long)exposeTimes;
- (BOOL)isVerifiedMusician;
- (id)avatarURLModel;
- (id)keyForPlaceholder;
- (long long)unreadCountForTrack;
- (id)serviceUid;
- (void)setUnreadType:;
- (id)latestMessage;
- (id)explainText;
- (void)setServiceModel:;
- (void)setInputTextDraft:;
- (void)setServiceUid:;
- (id)customizedAvatarGettingBlock;
- (BOOL)isAuthorService;
- (BOOL)shouldBoldLastMsgHint;
- (BOOL)isExtEmojiPropertyUnread;
- (id)latestEmojiPropertyItem;
- (id)secPeerID;
- (BOOL)canEnableShowLightGreetWithCheckAB:;
- (BOOL)greaterThanOrEqualToChat:;
- (BOOL)isLiveFansGroupOrContentCreatorFansGroup;
- (id)isRequestLiveUserInfo;
- (void)setIsRequestLiveUserInfo:;
- (id)liveCustomServiceConversation;
- (BOOL)needShowLiveCustomSPInfo;
- (void)setLiveCustomServiceTargetUser:;
- (void)setLiveCustomServiceConName:;
- (void)setLiveCustomServiceConAvatar:;
- (id)hasRequestedLiveCustomHintUserInfo;
- (id)liveCustomServiceConName;
- (id)liveCustomServiceConAvatar;
- (id)liveCustomServiceTargetUser;
- (void)requestLiveCustomUserInfo;
- (void)trackLiveCustomEntryUnReadCount;
- (void)setHasRequestedLiveCustomHintUserInfo:;
- (void)setCreatorUid:;
- (BOOL)currentGroupIsBanned;
- (BOOL)shouldShowPropertyItem;
- (void)updateDisplayText:forbidDisplayDraft:displayType:;
- (void)updateDisplayText:displayType:;
- (id)pushOptDisplayText;
- (BOOL)shouldShowMuteImportantMessageInnerAppPush;
- (BOOL)shouldShowMutedGroupMentionedInnerPush;
- (BOOL)isFormat;
- (id)latestEmojiProperItemBindMessage;
- (long long)unreadType;
- (void)setCancelStickTopTime:;
- (BOOL)isTrashStrangerConversationWithExt:;
- (long long)compareWithChat:;
- (id)commerceSence;
- (id)recommendGroupItem;
- (void)setRecommendGroupItem:;
- (void)readAssistantGroupForOfficialChat;
- (BOOL)hasNew;
- (void)setHasNew:;
- (id)strangerConversation;
- (id)hintMessage;
- (BOOL)isNotFollowFriend;
- (BOOL)isStrangerShowRead;
- (BOOL)isVerifiedUser;
- (void)setSubscribeCardID:;
- (void)setSubscribeArticleID:;
- (long long)landingGroup;
- (void)setLandingGroup:;
- (BOOL)canDisturb;
- (void)setCanDisturb:;
- (void)setDotUnreadCount:;
- (long long)dotUnreadCount;
- (BOOL)isOfficialAccount;
- (void)setExplainType:;
- (long long)explainType;
- (id)avatarImageName;
- (void)setIsAuthorService:;
- (void)setUnreadMentionMask:;
- (void)setBottomConversation:;
- (void)setThreadUnreadCount:;
- (BOOL)enableTrashTest;
- (BOOL)mentioned;
- (long long)unreadMention;
- (void)setSubscribeUnreadCountOnMute:;
- (BOOL)creatorIsEqualToOwner;
- (void)setLastMessageNoNotificationReg:;
- (void)setConsultingTagsArrayInJson:;
- (void)setEnableSubscribeUnreadCountOnMute:;
- (BOOL)enableSubscribeUnreadCountOnMute;
- (unsigned long long)chatFlag;
- (void)setChatFlag:;
- (void)setIsLiveFansGroupOrContentCreatorFansGroup:;
- (void)setGroupTypeForTracking:;
- (void)setCellSortTime:;
- (void)setNotDeliveryUnread:;
- (void)configWithLatestMsg:;
- (void)configWithLatestHintMsg:;
- (void)setLatestEmojiPropertyItem:;
- (void)setLatestEmojiProperItemBindMessage:;
- (void)configAllRelatedMsgWithLatestMsg:latestHintMsg:latestEmojiMsg:enableLog:;
- (void)setSecPeerID:;
- (id)senderOrRecaller;
- (void)setStrangerConversation:;
- (void)setIsAddressBookExplain:;
- (BOOL)isFlowInIM;
- (id)nameForAliasScene:;
- (BOOL)isSilverWingChat;
- (long long)compareWithChatUpdateDate:;
- (double)exposeTimestamp;
- (void)updateExposeTimes:;
- (void)updateExposeTimestamp:;
- (id)snapShotModelForPresenter;
- (unsigned long long)rightTailType;
- (long long)exchangeCameraDisplayStatus;
- (BOOL)isRecommendSchoolGroup;
- (BOOL)isRecommendGroupItem;
- (BOOL)isRecommendInviteUserChat;
- (BOOL)isGuideCreatedGroup;
- (BOOL)isGuideCreatedGroupFakeCell;
- (BOOL)isMentionRecommendGroup;
- (BOOL)isFakeMentionRecommendGroup;
- (id)officialRoleTag;
- (BOOL)isFromIMSDK;
- (BOOL)shouldDisplayEmojiUnreadDotIgnoreFeedCommentMention:;
- (void)updateWithIMChatModel:;
- (void)checkEnableShowGreet;
- (void)setSnapShotModelForPresenter:;
- (id)latestHintMessage;
- (long long)unreadCountForOfficialChat;
- (id)senderOrRecallerSecUserID;
- (void)updateDisplayText:;
- (id)hintOptDisplayText;
- (BOOL)shouldDisplayInputTextDraft;
- (void)setIsBoldLatestMessage:;
- (BOOL)isBoldLatestMessage;
- (BOOL)shouldDisplayMessageStateIcon;
- (BOOL)shouldDisplayMessageStateText;
- (BOOL)canShowNotFollowFriendExplain;
- (unsigned long long)unreadShowTypeForOfficialChat;
- (long long)dotCountForOfficialChat;
- (unsigned long long)diffableHash;
- (BOOL)shouldDisplayEmojiUnreadDot;
- (double)cancelStickTopTime;
- (BOOL)enableShuffleAndPinNoticeModel;
- (BOOL)shouldShowFeedCommentMentionYellowDot;
- (void)setUnreadMention:;
- (id)inputTextDraft;
- (id)groupTypeForTracking;
- (id)interactNoticeTrackerParams;
- (id)subscribeCardID;
- (id)subscribeArticleID;
- (long long)chatScene;
- (long long)demoteStateForOfficialChat;
- (void)setCommerceSence:;
- (BOOL)isEnableShowGreet;
- (void)disableShowGreet;
- (BOOL)shouldRecommendGroupExit;
- (BOOL)accountChecked;
- (void)setAccountChecked:;
- (void)setRightTailType:;
- (double)cellSortTime;
- (void)setLatestHintMessage:;
- (id)p_generateNoticeMessageWithConversationID:;
- (BOOL)lastMessageNoNotificationReg;
- (BOOL)shouldDisplayMessageState;
- (BOOL)__shouldDemoteUnreadCountToDot;
- (BOOL)isAddressBookExplain;
- (id)p_displayTextFromMessage:displayType:;
- (void)setPushOptDisplayText:;
- (void)setPushOptDisplayText:;
- (void)setHintOptDisplayText:;
- (void)setHintOptDisplayText:;
- (long long)diffVersion;
- (void)setDiffVersion:;
- (BOOL)shouldUseLGSort;
- (long long)LGCompareWithChatUpdateDate:;
- (long long)getSortWeight:;
- (BOOL)shouldBeConsideredAsNoticeWhenSorting;
- (double)p_cancelStickTopTime;
- (void)setNameForKVO:;
- (void)setAvatarForKVO:;
- (id)awemeCreateTimestamp;
- (BOOL)shouldDisplayInFriendTabMsgPage;
- (long long)compareAllInOneListWithChat:;
- (id)shareVSLiveMessageHint;
- (id)shareLongVideoMessageHint;
- (void)updateUnreadStateForOfficialChat;
- (void)setChatScene:;
- (id)nameForKVO;
- (id)avatarForKVO;
- (long long)realUnreadCount;
- (void)setRealUnreadCount:;
- (id)emojiReplyDisplayText;
- (void)setEmojiReplyDisplayText:;
- (void)setInteractNoticeTrackerParams:;
- (void)setAwemeCreateTimestamp:;
- (void)setOfficialRoleTag:;
- (id)consultingTagsArrayInJson;
- (void)setExchangeCameraDisplayStatus:;
- (void)setShouldBeConsideredAsNoticeWhenSorting:;
- (id)internalExposeTimestamp;
- (void)setInternalExposeTimestamp:;
- (id)internalExposeTimes;
- (void)setInternalExposeTimes:;
- (BOOL)isGuideCreatedGroupTrueGroup;
- (BOOL)isRecommendSchoolGroupType;
- (BOOL)isRealRecommendSchoolGroup;
- (void)setUserAlias:;
- (id)secUidGroupDictWithSecUidArray:;
- (BOOL)showedChatExplain;
- (void)setShowedChatExplain:;
- (id)im_customString;
- (void)setIm_customString:;
- (long long)unreadCount;
- (id)labelText;
- (BOOL)mute;
- (id)displayText;
- (void)setSessionId:;
- (id)sessionId;
- (unsigned long long)hash;
- (id)createTime;
- (id)peerID;
- (void)setStatus:;
- (void)setGroup:;
- (void)setUnreadCount:;
- (unsigned long long)group;
- (void)setMute:;
- (long long)type;
- (void)setDisplayText:;
- (void)setDisplayText:;
- (void)setCreateTime:;
- (void)setType:;
- (long long)serviceType;
- (void)setLabelText:;
- (void).cxx_destruct;
- (long long)status;
- (void)setServiceType:;
- (BOOL)isEqual:;
- (void)setName:;
- (id)name;
- (unsigned long long)participantsCount;
- (id)conversation;
- (void)setConversation:;
- (id)avatar;
- (id)avatarImage;
- (void)setAvatar:;
- (BOOL)businessChat;
- (void)setUpdateDate:;
- (double)updateDate;
- (BOOL)requestingUser;
- (void)setRequestingUser:;
- (BOOL)isMute;
- (id)ownerUid;
- (void)setOwnerUid:;
+ (id)getDisplayNameWith:maxLength:maxHeight:displayName:;
+ (id)oneToOneChatPeerIDOfSessionID:;
+ (BOOL)isNoticeChat:;
+ (id)oneToOneSessionIDOfPeerID:;
+ (id)defaultAvatarForChat:;
+ (id)displayTextWithMessage:displayType:peerUserName:;
+ (BOOL)enablePeerUserCrashFix;
+ (BOOL)isNormalGroupWithChat:;
+ (BOOL)isFansGroupWithChat:;
+ (BOOL)isOfficialNoticeChat:;
+ (BOOL)p_shouldDisableQuoteOnLatestMsgGen;
+ (id)displayTextWithMessage:displayType:peerUserName:chatModel:;
+ (id)inAppPushTextForLiveStartAutoSyncMsg:displayType:;
+ (id)inAppPushTextForPostAutoSyncMsg:displayType:;
@end
