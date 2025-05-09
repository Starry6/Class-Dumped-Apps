@interface IESSaaSTIMOMessage : IESSaaSTIMOModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) NSDictionary content;
@property (nonatomic) BOOL recalled;
@property (nonatomic) q recallerRole;
@property (nonatomic) NSDictionary recalledContent;
@property (nonatomic) NSNumber serverMessageID;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) q messageType;
@property (nonatomic) q sender;
@property (nonatomic) BOOL isInvalided;
@property (nonatomic) NSString senderSecID;
@property (nonatomic) q status;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) <IESIMReferMessageInfoProtocol> referMessageInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) q sender;
@property (nonatomic) NSString senderSecID;
@property (nonatomic) NSDictionary content;
@property (nonatomic) q messageType;
@property (nonatomic) NSArray mentionedUsers;
@property (nonatomic) NSDictionary syncedExtInternal;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) NSDictionary localExtInternal;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) NSArray fileAttachments;
@property (nonatomic) NSNumber serverMessageID;
@property (nonatomic) q status;
@property (nonatomic) NSInteger fileSendingProgressPercentage;
@property (nonatomic) <IESSaaSTIMMessageModelProtocol> internalModel;
@property (nonatomic) NSString observerID;
@property (nonatomic) NSArray fileIDs;
@property (nonatomic) NSString fileObserverID;
@property (nonatomic) NSLock fileProgressLock;
@property (nonatomic) NSMutableDictionary fileProgresses;
@property (nonatomic) BOOL recalled;
@property (nonatomic) NSDictionary recalledContent;
@property (nonatomic) q recallerRole;
@property (nonatomic) q recallerUserID;
@property (nonatomic) NSDictionary propertyMap;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) IESSaaSTIMOSenderProfile senderProfile;
@property (nonatomic) IESSaaSTIMOReferMessageInfo referMessageInfo;
@property (nonatomic) BOOL isFromServer;
@property (nonatomic) NSArray messageBodyFiles;
@property (nonatomic) q conversationShortID;
@property (nonatomic) Q conversationType;
@property (nonatomic) NSDictionary userProfileExt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongingConversationIdentifier;
- (id)fileIDs;
- (id)serverMessageID;
- (id)recalledContent;
- (void)setSenderSecID:;
- (void)setUpWithModel:;
- (void)applyAttributesFromModel:;
- (void)cancelSendingFileAttachments;
- (long long)conversationShortID;
- (unsigned long long)conversationType;
- (void)deleteWithMode:completion:;
- (void)file:uploadProgressChangedTo:;
- (id)fileAttachmentIdentifierWithDisplayType:;
- (id)fileObserverID;
- (id)fileProgressLock;
- (id)fileProgresses;
- (int)fileSendingProgressPercentage;
- (void)forceRefreshFromDB;
- (BOOL)isFromServer;
- (id)localExt;
- (id)localExtInternal;
- (id)mentionedUsers;
- (id)messageBodyFiles;
- (void)modifyPropertyItems:;
- (void)onConversationCleared:;
- (void)onConversationsDeleted:;
- (void)onMessagesCreated:belongingConversationMap:reason:;
- (void)onMessagesDeleted:belongingConversationMap:;
- (void)onMessagesUpdated:belongingConversationMap:;
- (long long)pullIndex;
- (void)recallMessageWithCompletion:;
- (long long)recallerRole;
- (long long)recallerUserID;
- (id)referMessageInfo;
- (id)senderProfile;
- (id)senderSecID;
- (void)setBelongingConversationIdentifier:;
- (void)setConversationShortID:;
- (void)setConversationType:;
- (void)setFileAttachments:;
- (void)setFileIDs:;
- (void)setFileObserverID:;
- (void)setFileProgressLock:;
- (void)setFileProgresses:;
- (void)setFileSendingProgressPercentage:;
- (void)setIsFromServer:;
- (void)setLocalExt:;
- (void)setLocalExtEntry:value:completion:;
- (void)setLocalExtInternal:;
- (void)setLocalExtWithKeys:values:completion:;
- (void)setMentionedUsers:;
- (void)setMessageBodyFiles:;
- (void)setObserverID:;
- (void)setRecalledContent:;
- (void)setRecallerRole:;
- (void)setRecallerUserID:;
- (void)setReferMessageInfo:;
- (void)setSenderProfile:;
- (void)setServerMessageID:;
- (void)setSyncedExt:;
- (void)setSyncedExtInternal:;
- (id)syncedExt;
- (id)syncedExtInternal;
- (id)userProfileExt;
- (id)content;
- (void)setStatus:;
- (long long)messageType;
- (void)setContent:;
- (id)initWithModel:;
- (void)setProperties:;
- (long long)sender;
- (id)identifier;
- (long long)orderIndex;
- (void)setCreatedAt:;
- (long long)compare:;
- (id)properties;
- (void).cxx_destruct;
- (id)createdAt;
- (void)setMessageType:;
- (long long)status;
- (void)setSender:;
- (void)setIdentifier:;
- (id)internalModel;
- (void)setInternalModel:;
- (id)fileAttachments;
- (id)observerID;
- (BOOL)recalled;
- (void)setRecalled:;
- (id)propertyMap;
- (void)setPropertyMap:;
+ (void)asyncGetUnreadMessagesFromSender:inConversation:limit:completion:;
+ (id)getMessageFromORMMessage:;
+ (BOOL)hasSendMessagesInConversation:userID:intervalSinceNow:belongingInMessageTypes:;
+ (BOOL)hasSendMessagesInConversation:userID:intervalSinceNow:excludeMessageTypes:;
+ (id)instanceWithIdentifier:inConversation:;
+ (id)instanceWithMessageModel:useCache:;
+ (id)messagesBelongingInMessageTypes:inConversation:;
+ (id)messagesBelongingInMessageTypes:inConversation:slideDirection:baseMessage:limit:;
+ (id)messagesWithType:sinceTime:;
+ (id)noCachedInstanceWithMessageModel:;
@end
