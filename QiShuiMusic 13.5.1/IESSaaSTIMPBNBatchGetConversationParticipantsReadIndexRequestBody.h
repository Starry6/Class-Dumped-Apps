@interface IESSaaSTIMPBNBatchGetConversationParticipantsReadIndexRequestBody : GPBMessage
@property (nonatomic) NSMutableArray conversationIdArray;
@property (nonatomic) Q conversationIdArray_Count;
@property (nonatomic) GPBInt64Array conversationShortIdArray;
@property (nonatomic) Q conversationShortIdArray_Count;
@property (nonatomic) NSString requestFrom;
@property (nonatomic) BOOL hasRequestFrom;
+ (id)descriptor;
@end
