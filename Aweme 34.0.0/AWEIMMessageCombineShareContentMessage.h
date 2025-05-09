@interface AWEIMMessageCombineShareContentMessage : MTLModel
@property (nonatomic) NSDictionary ext;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString belongingConversationIdentifier;
@property (nonatomic) NSString threadId;
@property (nonatomic) q parentConversationShortId;
@property (nonatomic) NSDictionary content;
@property (nonatomic) BOOL recalled;
@property (nonatomic) q recallerRole;
@property (nonatomic) NSDictionary recalledContent;
@property (nonatomic) NSNumber serverMessageID;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) NSDate serverCreatedAt;
@property (nonatomic) q messageType;
@property (nonatomic) q sender;
@property (nonatomic) BOOL isInvalided;
@property (nonatomic) NSString senderSecID;
@property (nonatomic) q hintType;
@property (nonatomic) q status;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSDictionary syncedExtInternal;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) <IESIMReferMessageInfoProtocol> referMessageInfo;
@property (nonatomic) BOOL isEmptyMessage;
@property (nonatomic) q version;
@property (nonatomic) q indexV2;
@property (nonatomic) NSString degradeInfo;
@property (nonatomic) q secConversationId;
@property (nonatomic) NSString realConversationId;
@property (nonatomic) NSString parentMsgId;
@property (nonatomic) q parentMsgCombineShareVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESIMMessageEditInfoProtocol> editInfo;
- (void)setExt:;
- (id)editInfo;
- (long long)pullIndex;
- (id)serverMessageID;
- (long long)aweType;
- (id)syncedExt;
- (id)localExt;
- (void)setLocalExtWithKeys:values:completion:;
- (id)belongingConversationIdentifier;
- (id)serverCreatedAt;
- (long long)parentConversationShortId;
- (long long)recallerRole;
- (id)recalledContent;
- (BOOL)isInvalided;
- (id)senderSecID;
- (long long)hintType;
- (long long)indexV2;
- (id)syncedExtInternal;
- (void)deleteWithMode:completion:;
- (void)deleteWithMode:conversation:completion:;
- (void)recallMessageWithCompletion:;
- (void)markMessageWithActionType:doAction:sortTime:completion:;
- (void)setLocalExtEntry:value:completion:;
- (id)intervalConfig;
- (void)setSyncedExt:;
- (void)setLocalExt:;
- (void)setServerMessageID:;
- (id)referMessageInfo;
- (id)p_cacheKey;
- (void)setHintType:;
- (long long)secConversationId;
- (void)setSecConversationId:;
- (void)setIsInvalided:;
- (id)initWithContentDic:;
- (void)setBelongingConversationIdentifier:;
- (id)degradeInfo;
- (void)setDegradeInfo:;
- (BOOL)isEmptyMessage;
- (void)setIsEmptyMessage:;
- (void)setIndexV2:;
- (void)setRecallerRole:;
- (void)setSyncedExtInternal:;
- (id)realConversationId;
- (void)setRealConversationId:;
- (id)parentMsgId;
- (void)setParentMsgId:;
- (long long)parentMsgCombineShareVersion;
- (void)setReferMessageInfo:;
- (id)initWithSubMessage:;
- (BOOL)needRefreshStatusWith:;
- (void)updateServerMessageId:;
- (void)updateCacheKey;
- (void)updateMsgStatus:;
- (void)setParentMsgCombineShareVersion:;
- (void)setParentConversationShortId:;
- (void)setRecalledContent:;
- (void)setServerCreatedAt:;
- (void)setSenderSecID:;
- (id)threadId;
- (long long)sender;
- (void)setSender:;
- (void)setProperties:;
- (id)content;
- (void)setStatus:;
- (void)setIdentifier:;
- (long long)version;
- (id)identifier;
- (void)setVersion:;
- (void)setContent:;
- (void)setCreatedAt:;
- (id)createdAt;
- (long long)orderIndex;
- (void).cxx_destruct;
- (id)properties;
- (long long)status;
- (void)setMessageType:;
- (long long)messageType;
- (id)initWithCoder:;
- (id)copyWithZone:;
- (void)setThreadId:;
- (BOOL)recalled;
- (void)setRecalled:;
- (id)ext;
@end
