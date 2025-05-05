@interface IESSaaSTIMPBNBroadcastRecvMessageRequestBody : GPBMessage
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
@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL hasReverse;
@property (nonatomic) NSInteger pullType;
@property (nonatomic) BOOL hasPullType;
+ (id)descriptor;
@end
