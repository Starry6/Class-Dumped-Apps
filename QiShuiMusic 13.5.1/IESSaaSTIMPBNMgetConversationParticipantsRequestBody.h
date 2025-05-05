@interface IESSaaSTIMPBNMgetConversationParticipantsRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) GPBInt64Array participantsArray;
@property (nonatomic) Q participantsArray_Count;
+ (id)descriptor;
@end
