@interface IESSaaSTIMPBNMarkMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) BOOL doAction;
@property (nonatomic) BOOL hasDoAction;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) q sortTime;
@property (nonatomic) BOOL hasSortTime;
+ (id)descriptor;
@end
