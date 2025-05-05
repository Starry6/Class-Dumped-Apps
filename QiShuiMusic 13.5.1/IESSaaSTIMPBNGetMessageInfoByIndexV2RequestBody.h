@interface IESSaaSTIMPBNGetMessageInfoByIndexV2RequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) GPBInt64Array indexInConversationV2Array;
@property (nonatomic) Q indexInConversationV2Array_Count;
+ (id)descriptor;
@end
