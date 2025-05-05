@interface IESSaaSTIMPBNPullMarkMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) q limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) BOOL asc;
@property (nonatomic) BOOL hasAsc;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) BOOL hasActionType;
+ (id)descriptor;
@end
