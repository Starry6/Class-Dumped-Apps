@interface IESSaaSTIMPBNConversationInfoV2 : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) IESSaaSTIMPBNParticipantsPage firstPageParticipants;
@property (nonatomic) BOOL hasFirstPageParticipants;
@property (nonatomic) NSInteger participantsCount;
@property (nonatomic) BOOL hasParticipantsCount;
@property (nonatomic) BOOL isParticipant;
@property (nonatomic) BOOL hasIsParticipant;
@property (nonatomic) NSInteger inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) IESSaaSTIMPBNParticipant userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) IESSaaSTIMPBNConversationCoreInfo conversationCoreInfo;
@property (nonatomic) BOOL hasConversationCoreInfo;
@property (nonatomic) IESSaaSTIMPBNConversationSettingInfo conversationSettingInfo;
@property (nonatomic) BOOL hasConversationSettingInfo;
+ (id)descriptor;
@end
