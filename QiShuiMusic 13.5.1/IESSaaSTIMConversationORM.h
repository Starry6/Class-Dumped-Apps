@interface IESSaaSTIMConversationORM : IESSaaSTIMBaseORM
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) q shortID;
@property (nonatomic) q participantsCount;
@property (nonatomic) BOOL isParticipant;
@property (nonatomic) NSDate updatedAt;
@property (nonatomic) q unreadCount;
@property (nonatomic) q fakeUnreadCount;
@property (nonatomic) q minIndex;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSDate draftAt;
@property (nonatomic) NSString draftText;
@property (nonatomic) BOOL hasUnreadMention;
@property (nonatomic) BOOL isStranger;
@property (nonatomic) q belongedAcquaintanceType;
@property (nonatomic) NSInteger inbox;
@property (nonatomic) NSDate ticketUpdatedAt;
@property (nonatomic) NSData firstPageParticipants;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString localInfo;
@property (nonatomic) NSData userInfo;
@property (nonatomic) NSString ignoredIndexInConversationV2s;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) q sortOrder;
@property (nonatomic) BOOL bottomConversation;
@property (nonatomic) <IESSaaSTIMConversationSettingsInfoModelProtocol> cachedSettingsInfo;
@property (nonatomic) <IESSaaSTIMConversationCoreInfoModelProtocol> cachedCoreInfo;
@property (nonatomic) <IESSaaSTIMConversationLocalInfoModelProtocol> cachedLocalInfo;
@property (nonatomic) NSDictionary localInfoDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)fakeUnreadCount;
- (id)ticketUpdatedAt;
- (id)cachedLocalInfo;
- (id)draftAt;
- (long long)shortID;
- (long long)belongedAcquaintanceType;
- (BOOL)bottomConversation;
- (id)cachedCoreInfo;
- (id)cachedSettingsInfo;
- (long long)conversationVersion;
- (id)draftText;
- (id)fetchCoreInfo;
- (id)fetchLocalInfo;
- (id)fetchSettingsInfo;
- (id)firstPageParticipants;
- (BOOL)hasUnreadMention;
- (id)ignoredIndexInConversationV2s;
- (BOOL)isParticipant;
- (BOOL)isStranger;
- (id)localInfo;
- (id)localInfoDictionary;
- (void)setBelongedAcquaintanceType:;
- (void)setBottomConversation:;
- (void)setCachedCoreInfo:;
- (void)setCachedLocalInfo:;
- (void)setCachedSettingsInfo:;
- (void)setDraftAt:;
- (void)setDraftText:;
- (void)setFakeUnreadCount:;
- (void)setFirstPageParticipants:;
- (void)setHasUnreadMention:;
- (void)setIgnoredIndexInConversationV2s:;
- (void)setIsParticipant:;
- (void)setIsStranger:;
- (void)setLocalInfo:;
- (void)setLocalInfoDictionary:;
- (void)setMinIndex:;
- (void)setParticipantsCount:;
- (void)setShortID:;
- (void)setTicketUpdatedAt:;
- (BOOL)shouldStickOnTop;
- (BOOL)muted;
- (long long)sortOrder;
- (void)setStatus:;
- (long long)unreadCount;
- (void)setSortOrder:;
- (id)userInfo;
- (id)identifier;
- (void)setType:;
- (void)setUnreadCount:;
- (long long)minIndex;
- (long long)participantsCount;
- (int)type;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (int)status;
- (void)setIdentifier:;
- (int)badgeCount;
- (void)setBadgeCount:;
- (id)ticket;
- (void)setTicket:;
- (int)inbox;
- (void)setInbox:;
- (id)updatedAt;
- (void)setUpdatedAt:;
+ (id)fakeUnreadCount;
+ (id)ticketUpdatedAt;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)draftAt;
+ (id)shortID;
+ (id)belongedAcquaintanceType;
+ (id)bottomConversation;
+ (id)draftText;
+ (id)firstPageParticipants;
+ (id)hasUnreadMention;
+ (id)ignoredIndexInConversationV2s;
+ (id)isParticipant;
+ (id)isStranger;
+ (id)localInfo;
+ (id)objectRelationalMappingForWCDB;
+ (id)sortOrder;
+ (id)unreadCount;
+ (id)userInfo;
+ (id)identifier;
+ (id)minIndex;
+ (id)participantsCount;
+ (id)type;
+ (id)status;
+ (id)badgeCount;
+ (id)ticket;
+ (id)inbox;
+ (id)updatedAt;
@end
