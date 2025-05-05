@interface IESSaaSTIMPBNDeleteConversationRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q lastMessageIndex;
@property (nonatomic) BOOL hasLastMessageIndex;
@property (nonatomic) q lastMessageIndexV2;
@property (nonatomic) BOOL hasLastMessageIndexV2;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
+ (id)descriptor;
@end
