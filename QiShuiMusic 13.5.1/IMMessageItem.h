@interface IMMessageItem : IMItem
@property (nonatomic) NSArray messageParts;
@property (nonatomic) BOOL backwardsCompatibleVersion;
@property (nonatomic) BOOL isCorrupt;
@property (nonatomic) BOOL isSpam;
@property (nonatomic) NSString subject;
@property (nonatomic) NSAttributedString body;
@property (nonatomic) NSData bodyData;
@property (nonatomic) NSData payloadData;
@property (nonatomic) NSString expressiveSendStyleID;
@property (nonatomic) NSDate timeExpressiveSendPlayed;
@property (nonatomic) NSDate timeRead;
@property (nonatomic) NSDate timeDelivered;
@property (nonatomic) NSDate timePlayed;
@property (nonatomic) NSDate dateEdited;
@property (nonatomic) Q partCount;
@property (nonatomic) Q flags;
@property (nonatomic) q expireState;
@property (nonatomic) I errorCode;
@property (nonatomic) q replaceID;
@property (nonatomic) BOOL hasDataDetectorResults;
@property (nonatomic) BOOL blockingRichLinks;
@property (nonatomic) BOOL isDelivered;
@property (nonatomic) BOOL isSent;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isPlayed;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isUnfinished;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL isAlert;
@property (nonatomic) BOOL wasDataDetected;
@property (nonatomic) BOOL wasDowngraded;
@property (nonatomic) BOOL wasDeliveredQuietly;
@property (nonatomic) BOOL didNotifyRecipient;
@property (nonatomic) BOOL isAutoReply;
@property (nonatomic) BOOL isSystemMessage;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) BOOL isTypingMessage;
@property (nonatomic) BOOL isLocatingMessage;
@property (nonatomic) BOOL isEmote;
@property (nonatomic) BOOL isAudioMessage;
@property (nonatomic) BOOL isExpirable;
@property (nonatomic) BOOL isFromExternalSource;
@property (nonatomic) BOOL hasUnseenMention;
@property (nonatomic) BOOL isFileAttachment;
@property (nonatomic) BOOL isStewie;
@property (nonatomic) q stewieConversationID;
@property (nonatomic) NSUUID stewieConversationUUID;
@property (nonatomic) q stewieSequenceNumber;
@property (nonatomic) NSAttributedString translatedText;
@property (nonatomic) NSString detectedLanguage;
@property (nonatomic) BOOL shouldSendPartIndexesInMessageBody;
@property (nonatomic) NSIndexSet editedPartIndexes;
@property (nonatomic) BOOL hasEditedParts;
@property (nonatomic) NSIndexSet retractedPartIndexes;
@property (nonatomic) BOOL isFullyRetracted;
@property (nonatomic) NSIndexSet failedEditPartIndexes;
@property (nonatomic) NSIndexSet failedRetractPartIndexes;
@property (nonatomic) NSDictionary originalTextRangesByPartIndex;
@property (nonatomic) NSArray editUnsupportedByHandleIDs;
@property (nonatomic) Q editEligibility;
@property (nonatomic) BOOL isBeingRetried;
@property (nonatomic) NSString retryToParticipant;
@property (nonatomic) NSString notificationIDSTokenURI;
@property (nonatomic) NSAttributedString breadcrumbText;
@property (nonatomic) NSString plainBody;
@property (nonatomic) NSData typingIndicatorIcon;
@property (nonatomic) NSData contactsAvatarRecipeData;
@property (nonatomic) BOOL updatingDataSourcePayload;
@property (nonatomic) NSDictionary messageSummaryInfo;
@property (nonatomic) NSDictionary bizIntent;
@property (nonatomic) NSString locale;
@property (nonatomic) BOOL isSOS;
@property (nonatomic) BOOL useStandalone;
@property (nonatomic) BOOL NicknameRequested;
@property (nonatomic) BOOL shouldSendMeCard;
@property (nonatomic) NSString suggestedAuthorName;
@property (nonatomic) NSString suggestedAuthorAvatarPath;
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) IMMessageItem threadOriginator;
@property (nonatomic) NSDictionary replyCountsByPart;
@property (nonatomic) NSArray syndicationRanges;
@property (nonatomic) NSArray syncedSyndicationRanges;
@property (nonatomic) BOOL wasDetectedAsSWYSpam;
@property (nonatomic) NSString swyAppName;
@property (nonatomic) NSString swyBundleID;
@property (nonatomic) BOOL containsRichLink;
@property (nonatomic) NSArray richLinkURLs;
@property (nonatomic) TUConversationActivity groupActivity;
@property (nonatomic) q transcriptSharingMessageType;
@property (nonatomic) BOOL initialTranscriptSharingItem;
- (id)_copy;
- (id)_service;
- (id)message;
- (id)_copyWithFlags:;
- (id)descriptionForPurpose:isGroupMessage:messageDataSource:attachmentDataSource:;
- (id)descriptionForPurpose:isGroupMessage:senderDisplayName:messageDataSource:attachmentDataSource:;
- (BOOL)_isInvitation;
- (void)_setInivtation:;
- (BOOL)_hasMessageChatItem;
- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:;
- (BOOL)isExtensibleMessageWithPluginPayload:;
- (BOOL)isExtensibleMessageWithPluginPayload:chatContext:;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isReply;
- (void)setThreadIdentifier:;
- (id)threadIdentifier;
- (void)setLocale:;
- (id)subject;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)setSubject:;
- (unsigned int)errorCode;
- (id)body;
- (BOOL)isPrepared;
- (id)sender;
- (id)initWithDictionary:;
- (id)locale;
- (id)initWithCoder:;
- (BOOL)isCorrupt;
- (void)setDetectedLanguage:;
- (id)bodyData;
- (BOOL)isRead;
- (void)encodeWithCoder:;
- (BOOL)isFinished;
- (void)setBody:;
- (void)setPayloadData:;
- (void)setErrorCode:;
- (id)description;
- (void)setFlags:;
- (unsigned long long)flags;
- (BOOL)isEqual:;
- (id)detectedLanguage;
- (id)copyWithZone:;
- (BOOL)isSent;
- (BOOL)isFromMe;
- (BOOL)hasDataDetectorResults;
- (BOOL)hasEditedParts;
- (id)initWithSenderInfo:time:timeRead:timeDelivered:timePlayed:subject:body:bodyData:attributes:fileTransferGUIDs:flags:guid:messageID:account:accountID:service:handle:roomName:unformattedID:countryCode:expireState:balloonBundleID:payloadData:expressiveSendStyleID:timeExpressiveSendPlayed:bizIntent:locale:errorType:threadIdentifier:syndicationRanges:syncedSyndicationRanges:partCount:dateEdited:;
- (BOOL)canRetryFailedRetraction;
- (BOOL)wasDeliveredQuietly;
- (BOOL)wasDetectedAsSWYSpam;
- (BOOL)wasDowngraded;
- (long long)transcriptSharingMessageType;
- (long long)expireState;
- (BOOL)isTypingMessage;
- (id)retractedPartIndexes;
- (unsigned long long)partCount;
- (id)typingIndicatorIcon;
- (id)swyAppName;
- (id)swyBundleID;
- (id)payloadData;
- (id)syncedSyndicationRanges;
- (id)fileTransferGUIDs;
- (id)syndicationRanges;
- (void)setIsSOS:;
- (id)messageSummaryInfo;
- (BOOL)isDelivered;
- (id)plainBody;
- (id)timeExpressiveSendPlayed;
- (id)breadcrumbText;
- (void)setFileTransferGUIDs:;
- (BOOL)isLocatingMessage;
- (BOOL)isStewie;
- (void)setIsStewie:;
- (id)threadOriginator;
- (void)setThreadOriginator:;
- (BOOL)isPlayed;
- (BOOL)wasDetonated;
- (id)bizIntent;
- (void)setBizIntent:;
- (BOOL)isSpam;
- (BOOL)isAudioMessage;
- (long long)stewieConversationID;
- (id)expressiveSendStyleID;
- (void)setExpressiveSendStyleID:;
- (id)groupActivity;
- (void)setGroupActivity:;
- (BOOL)isFromExternalSource;
- (BOOL)useStandalone;
- (void)setUseStandalone:;
- (BOOL)isSOS;
- (void)setBodyData:;
- (id)initWithSender:time:guid:type:;
- (id)copyDictionaryRepresentation;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isLastMessageCandidate;
- (void)setTimeRead:;
- (void)setTimePlayed:;
- (void)setTimeDelivered:;
- (void)setExpireState:;
- (void)setMessageSummaryInfo:;
- (id)timeRead;
- (id)timePlayed;
- (id)timeDelivered;
- (id)copyWithFlags:;
- (id)copyForBackwardsCompatibility;
- (unsigned long long)partKeyForAttachmentGUID:;
- (void)enumerateAttachmentGUIDsWithBlock:;
- (id)attachmentGUIDAtIndex:;
- (id)initWithDictionary:hint:;
- (id)initWithSender:time:body:attributes:fileTransferGUIDs:flags:error:guid:threadIdentifier:;
- (id)initWithSender:time:body:attributes:fileTransferGUIDs:flags:error:guid:type:threadIdentifier:;
- (id)initWithSenderInfo:time:guid:messageID:account:accountID:service:handle:roomName:unformattedID:countryCode:;
- (id)initWithSenderInfo:time:timeRead:timeDelivered:timePlayed:subject:body:bodyData:attributes:fileTransferGUIDs:flags:guid:messageID:account:accountID:service:handle:roomName:unformattedID:countryCode:expireState:balloonBundleID:payloadData:expressiveSendStyleID:timeExpressiveSendPlayed:bizIntent:locale:errorType:type:threadIdentifier:syndicationRanges:syncedSyndicationRanges:partCount:dateEdited:;
- (BOOL)isAlert;
- (BOOL)isUnfinished;
- (BOOL)isExpirable;
- (BOOL)didNotifyRecipient;
- (BOOL)isAutoReply;
- (BOOL)isSystemMessage;
- (BOOL)isEmote;
- (BOOL)isFileAttachment;
- (void)setIsCorrupt:;
- (void)setIsSpam:;
- (long long)stewieSequenceNumber;
- (void)setStewieSequenceNumber:;
- (void)setStewieConversationID:;
- (id)stewieConversationUUID;
- (void)setStewieConversationUUID:;
- (void)setTranscriptSharingMessageType:;
- (BOOL)isInitialTranscriptSharingItem;
- (void)setInitialTranscriptSharingItem:;
- (id)translatedText;
- (BOOL)shouldSendPartIndexesInMessageBody;
- (unsigned long long)replyCountForPartIndex:;
- (id)editedPartIndexes;
- (void)setEditedPartIndexes:;
- (void)addEditedPartIndex:;
- (void)setRetractedPartIndexes:;
- (void)addRetractedPartIndex:;
- (id)failedEditPartIndexes;
- (void)setFailedEditPartIndexes:;
- (void)addFailedEditPartIndex:;
- (id)failedRetractPartIndexes;
- (void)setFailedRetractPartIndexes:;
- (void)addFailedRetractPartIndex:;
- (id)historyForMessagePart:;
- (void)setHistory:forMessagePart:;
- (id)originalTextRangesByPartIndex;
- (void)setOriginalTextRangesByPartIndex:;
- (id)_partRangeByIndexToPlistSerializable:;
- (id)_partRangeByIndexFromPlistSerializable:;
- (id)editUnsupportedByHandleIDs;
- (BOOL)isFullyRetracted;
- (unsigned long long)eligibilityForEditType:messagePartIndex:;
- (double)_timeoutIntervalForEditType:;
- (double)_messageEditTimeout;
- (double)_messageEditHistoryLimit;
- (double)_messageRetractionTimeout;
- (BOOL)hasUnseenMention;
- (void)setHasUnseenMention:;
- (void)setHasDataDetectorResults:;
- (BOOL)wasDataDetected;
- (BOOL)containsRichLink;
- (id)richLinkURLs;
- (void)setSwyAppName:;
- (void)setSwyBundleID:;
- (void)setWasDataDetected:;
- (void)setCMMStateToRegisteredAndAssetOffsetTo:;
- (unsigned long long)getCMMState;
- (void)setCMMState:;
- (void)setCMMAssetOffset:;
- (unsigned long long)getCMMAssetOffset;
- (void)_updateFlags:;
- (void)adjustIsEmptyFlag;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (void)_regenerateBodyText;
- (void)_regenerateBodyData;
- (void)_clearBodyData;
- (void)eraseMessageContent;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (void)setPlainBody:;
- (long long)replaceID;
- (void)setReplaceID:;
- (id)contactsAvatarRecipeData;
- (void)setContactsAvatarRecipeData:;
- (void)setTimeExpressiveSendPlayed:;
- (void)setTypingIndicatorIcon:;
- (void)setSyndicationRanges:;
- (void)setSyncedSyndicationRanges:;
- (id)dateEdited;
- (void)setDateEdited:;
- (void)setPartCount:;
- (BOOL)blockingRichLinks;
- (void)setBlockingRichLinks:;
- (void)setTranslatedText:;
- (void)setShouldSendPartIndexesInMessageBody:;
- (unsigned long long)editEligibility;
- (void)setEditEligibility:;
- (BOOL)isBeingRetried;
- (void)setIsBeingRetried:;
- (id)retryToParticipant;
- (void)setRetryToParticipant:;
- (id)notificationIDSTokenURI;
- (void)setNotificationIDSTokenURI:;
- (BOOL)isUpdatingDataSourcePayload;
- (void)setUpdatingDataSourcePayload:;
- (BOOL)backwardsCompatibleVersion;
- (void)setBackwardsCompatibleVersion:;
- (BOOL)NicknameRequested;
- (void)setNicknameRequested:;
- (BOOL)shouldSendMeCard;
- (void)setShouldSendMeCard:;
- (id)suggestedAuthorName;
- (void)setSuggestedAuthorName:;
- (id)suggestedAuthorAvatarPath;
- (void)setSuggestedAuthorAvatarPath:;
- (id)replyCountsByPart;
- (void)setReplyCountsByPart:;
- (void)setWasDetectedAsSWYSpam:;
- (id)messageParts;
- (unsigned long long)powerLogMessageType;
+ (id)bestAccountForAddress:;
+ (id)handleForAddress:;
+ (BOOL)isLoginAddress:;
+ (id)displayNameForAddress:;
+ (Class)contextClass;
+ (BOOL)isIncomingTypingMessage:;
+ (BOOL)isCancelTypingMessage:isEditedMessage:;
+ (BOOL)isTypingOrCancelTypingMessage:isEditedMessage:;
+ (BOOL)isIncomingTypingOrCancelTypingMessage:isEditedMessage:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)partKeyForAttachmentGUID:inBody:;
+ (BOOL)messageContainsSurfDD:;
+ (id)_messageItemWithIndexesDeleted:subRangesToDeleteMapping:deleteSubject:deleteTransferCallback:createItemCallback:fromMessageItem:;
+ (id)newMessageItemFrom:withText:deleteSubject:withFileTransferGUIDs:;
@end
