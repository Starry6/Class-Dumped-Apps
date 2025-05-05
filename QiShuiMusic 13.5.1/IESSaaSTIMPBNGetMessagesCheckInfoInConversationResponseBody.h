@interface IESSaaSTIMPBNGetMessagesCheckInfoInConversationResponseBody : GPBMessage
@property (nonatomic) NSMutableArray msgsCheckinfoListArray;
@property (nonatomic) Q msgsCheckinfoListArray_Count;
@property (nonatomic) NSInteger realMsgTotalCount;
@property (nonatomic) BOOL hasRealMsgTotalCount;
@property (nonatomic) q cursorReverseNext;
@property (nonatomic) BOOL hasCursorReverseNext;
+ (id)descriptor;
@end
