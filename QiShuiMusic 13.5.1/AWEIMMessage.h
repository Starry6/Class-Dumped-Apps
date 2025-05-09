@interface AWEIMMessage : NSObject
@property (nonatomic) BOOL isFromCommerce;
@property (nonatomic) q quoteReplyServerMessageID;
@property (nonatomic) q quoteReplyMessageStatus;
@property (nonatomic) q quoteReplyMessageType;
@property (nonatomic) NSString quoteReplyMessageHint;
@property (nonatomic) NSString refreshStorageContentTitle;
@property (nonatomic) IESIMSaaSAWEIMUser toUser;
@property (nonatomic) NSString toUid;
@property (nonatomic) IESIMSaaSAWEIMUser fromUser;
@property (nonatomic) NSString fileID;
@property (nonatomic) NSString filePath;
@property (nonatomic) BOOL readFlag;
@property (nonatomic) BOOL placeholderFlag;
@property (nonatomic) BOOL storyNotExisted;
@property (nonatomic) BOOL groupConInfoNotComplete;
@property (nonatomic) q quoteReplyServerMessageID;
@property (nonatomic) q quoteReplyMessageStatus;
@property (nonatomic) q quoteReplyMessageType;
@property (nonatomic) NSString quoteReplyMessageHint;
@property (nonatomic) Q quoteVersion;
@property (nonatomic) Q scene_type;
@property (nonatomic) q referMessageType;
@property (nonatomic) NSString referMessageUid;
@property (nonatomic) AWEIMTextMessageQuoteEncryptImageContent encryptImageContent;
@property (nonatomic) AWEIMTextMessageQuoteFeedVideoContent feedVideoContent;
@property (nonatomic) AWEIMTextMessageQuoteVideoContent videoContent;
@property (nonatomic) AWEIMCloseFriendMomentContent quoteMomentContent;
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) q busiType;
@property (nonatomic) q localID;
@property (nonatomic) q globalIndex;
@property (nonatomic) q createTime;
@property (nonatomic) q modifiedCreateTime;
@property (nonatomic) q messageType;
@property (nonatomic) q chatModelType;
@property (nonatomic) q aweType;
@property (nonatomic) q messageState;
@property (nonatomic) BOOL recalled;
@property (nonatomic) q serverMessageID;
@property (nonatomic) q rootMessageID;
@property (nonatomic) q prevMessageID;
@property (nonatomic) q needSkipStrange;
@property (nonatomic) BOOL isInvalided;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSString fromUid;
@property (nonatomic) NSString secFromUid;
@property (nonatomic) BOOL isFromStranger;
@property (nonatomic) NSArray propertyGroups;
@property (nonatomic) NSArray propertyList;
@property (nonatomic) AWEIMMessagePropertyItem propertyFromSelf;
@property (nonatomic) NSString preSendMsgID;
@property (nonatomic) {CGSize=dd} messageSize;
@property (nonatomic) {CGSize=dd} quoteReplySize;
@property (nonatomic) NSAttributedString attributedContent;
@property (nonatomic) AWEIMMessageGroup group;
@property (nonatomic) BOOL userGenerated;
@property (nonatomic) NSString filterMinVersion;
@property (nonatomic) NSString filterMaxVersion;
@property (nonatomic) AWEIMReadReceiptModel readReceiptModel;
@property (nonatomic) double readProgress;
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
@property (nonatomic) NSArray showedParticipantIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)aweType;
- (id)memoryCacheForUnavailableReason;
- (long long)needSkipStrange;
- (id)referMessageUid;
- (long long)serverMessageID;
- (void)setGlobalIndex:;
- (BOOL)storyNotExisted;
- (void)didFinishConfig;
- (id)fromUid;
- (BOOL)placeholderFlag;
- (void)setIsInvalided:;
- (BOOL)unavailableFlag;
- (id)__ies_im_conversation;
- (void)appendQuoteReplyInfosWithMessage:tempDict:;
- (id)attributedContent;
- (id)awe_fileIDDictionary;
- (id)awe_fileIDForAttachmentFileType:;
- (id)awe_filePathDictionary;
- (id)awe_filePathForAttachmentFileType:;
- (id)awe_groupNoticeNicknameDictionary;
- (id)awe_refreshStoragePropertyForKey:;
- (long long)busiType;
- (id)calculateAttributedContent;
- (BOOL)canBeQuotedReply;
- (long long)chatModelType;
- (id)compatibleIdentifier;
- (id)diskCacheForAvatarUrl;
- (id)diskCacheForUnavailableFlag;
- (id)diskCacheForUnavailableFlagLastUpdateTimestamp;
- (id)diskCacheForUnavailableReason;
- (id)encryptImageContent;
- (id)expectedParticipantIDs;
- (id)feedVideoContent;
- (id)filterMaxVersion;
- (id)filterMinVersion;
- (id)finishedParticipantIDs;
- (id)generateForwardMessage;
- (id)getContent;
- (id)getContentDict;
- (id)getSyncedExtDict;
- (long long)globalIndex;
- (BOOL)groupConInfoNotComplete;
- (BOOL)hasEmojiProperties;
- (BOOL)hasSameEmojiPropertiesOfMessage:;
- (id)initWithContentDict:;
- (BOOL)isAllowedCellEdit;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedForward;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (BOOL)isCellShouldMoveContainerView;
- (BOOL)isFromCommerce;
- (BOOL)isFromStranger;
- (BOOL)isIllegalMessageForUserID:;
- (BOOL)isInvalided;
- (BOOL)isMsgFromOpenPlatform;
- (BOOL)isMsgShouldBeFiltered;
- (BOOL)isSeenByMyself;
- (id)localExt;
- (id)memoryCacheForAvatarUrl;
- (id)memoryCacheForRefreshStorageKey:;
- (id)memoryCacheForUnavailableFlag;
- (id)memoryCacheForUnavailableFlagLastUpdateTimestamp;
- (long long)messageState;
- (id)messageTypeString;
- (long long)modifiedCreateTime;
- (void)onReceiveReadReceiptUpdatedNotification:;
- (id)p_getRefreshStorablePropertyWithKey:;
- (void)p_setRefreshStorablePropertyWithKey:value:;
- (id)preSendMsgID;
- (void)prepareDataForQuotedMessageId:;
- (void)prepareForConversationHint;
- (long long)prevMessageID;
- (id)propertyFromSelf;
- (id)quoteHint;
- (id)quoteMomentContent;
- (id)quoteNickname;
- (id)quoteReplyMessageHint;
- (long long)quoteReplyMessageStatus;
- (long long)quoteReplyMessageType;
- (long long)quoteReplyServerMessageID;
- (id)quoteReplySize;
- (unsigned long long)quoteVersion;
- (BOOL)readFlag;
- (double)readProgress;
- (id)readReceiptModel;
- (id)readReceiptModelInit;
- (long long)referMessageType;
- (id)refreshStorageContentTitle;
- (long long)rootMessageID;
- (unsigned long long)sceneTypeWithMessage:;
- (unsigned long long)scene_type;
- (id)secFromUid;
- (BOOL)sendFromMe;
- (void)setAttributedContent:;
- (void)setAweType:;
- (void)setAwe_refreshStoragePropertyForKey:refreshStorageProperty:;
- (void)setBusiType:;
- (void)setChatModelType:;
- (void)setEncryptImageContent:;
- (void)setExpectedParticipantIDs:;
- (void)setFeedVideoContent:;
- (void)setFilterMaxVersion:;
- (void)setFilterMinVersion:;
- (void)setFinishedParticipantIDs:;
- (void)setFromUid:;
- (void)setIsFromStranger:;
- (void)setLocalExt:;
- (void)setMessageState:;
- (void)setModifiedCreateTime:;
- (void)setNeedSkipStrange:;
- (void)setPreSendMsgID:;
- (void)setPrevMessageID:;
- (void)setPropertyFromSelf:;
- (void)setQuoteMomentContent:;
- (void)setQuoteReplyMessageHint:;
- (void)setQuoteReplyMessageStatus:;
- (void)setQuoteReplyMessageType:;
- (void)setQuoteReplyServerMessageID:;
- (void)setQuoteReplySize:;
- (void)setQuoteVersion:;
- (void)setReadProgress:;
- (void)setReadReceiptModel:;
- (void)setReferMessageType:;
- (void)setReferMessageUid:;
- (void)setRefreshStorageContentTitle:;
- (void)setRootMessageID:;
- (void)setScene_type:;
- (void)setSecFromUid:;
- (void)setServerMessageID:;
- (void)setShowedParticipantIDs:;
- (void)setStorableAvatarUrl:;
- (void)setSyncedExt:;
- (void)setUnavailableFlag:;
- (void)setUnavailableFlagUpdateTimestamp:;
- (void)setUnavailableReason:;
- (void)setVideoContent:;
- (BOOL)shouldAppendNewQuoteReplyInfo;
- (BOOL)shouldShowNickname;
- (id)showedParticipantIDs;
- (id)storableAvatarUrl;
- (id)syncedExt;
- (id)toUid;
- (id)transToIESMessage;
- (id)unavailableBubbleModel;
- (id)unavailableFlagLastUpdateTimestamp;
- (long long)unavailableReason;
- (void)updateUnavailableBubbleModel;
- (void)updateWithMessage:;
- (BOOL)userGenerated;
- (id)videoContent;
- (void)writeDiskCacheForAvatarUrl:;
- (void)writeDiskCacheForUnavailableFlag:completion:;
- (void)writeDiskCacheForUnavailableFlagUpdateTimestamp:;
- (void)writeDiskCacheForUnavailableReason:;
- (void)writeMemoryCacheForAvatarUrl:;
- (void)writeMemoryCacheForMessageTitle:;
- (void)writeMemoryCacheForRefreshStorageForKey:value:;
- (void)writeMemoryCacheForUnavailableFlag:;
- (void)writeMemoryCacheForUnavailableFlagLastUpdateTimestamp:;
- (void)writeMemoryCacheForUnavailableReason:;
- (id)filePath;
- (id)propertyList;
- (id)fileID;
- (id)messageID;
- (long long)messageType;
- (void)dealloc;
- (long long)createTime;
- (void)registerNotifications;
- (void)setMessageSize:;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
- (void)unregisterNotifications;
- (void)setMessageID:;
- (void)setMessageType:;
- (void)setCreateTime:;
- (id)messageSize;
- (id)conversationID;
- (long long)localID;
- (id)copyWithZone:;
- (void)setConversationID:;
- (id)propertyGroups;
- (BOOL)shouldHide;
- (void)setPropertyGroups:;
- (id)fromUser;
- (void)setPropertyList:;
- (id)toUser;
- (BOOL)recalled;
- (void)setRecalled:;
- (void)setLocalID:;
+ (BOOL)canBeQuotedReplyWithType:;
+ (id)convertMsgTypeIntoString:aweType:content:;
+ (id)p_convertMsgTypeIntoString:aweType:content:;
+ (Class)viewModelClass;
+ (id)identifier;
@end
