@interface IESSaaSTIMPBNConversationParticipantsListRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) NSInteger limit;
@property (nonatomic) BOOL hasLimit;
+ (id)descriptor;
@end
