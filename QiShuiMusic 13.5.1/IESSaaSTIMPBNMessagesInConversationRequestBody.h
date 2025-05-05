@interface IESSaaSTIMPBNMessagesInConversationRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger direction;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) q anchorIndex;
@property (nonatomic) BOOL hasAnchorIndex;
@property (nonatomic) NSInteger limit;
@property (nonatomic) BOOL hasLimit;
+ (id)descriptor;
@end
