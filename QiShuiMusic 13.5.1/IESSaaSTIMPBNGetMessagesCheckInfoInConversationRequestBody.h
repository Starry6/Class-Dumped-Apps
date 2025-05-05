@interface IESSaaSTIMPBNGetMessagesCheckInfoInConversationRequestBody : GPBMessage
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q cursorReverseBegin;
@property (nonatomic) BOOL hasCursorReverseBegin;
@property (nonatomic) q cursorReverseEnd;
@property (nonatomic) BOOL hasCursorReverseEnd;
@property (nonatomic) NSInteger expectMsgTotalCount;
@property (nonatomic) BOOL hasExpectMsgTotalCount;
+ (id)descriptor;
@end
