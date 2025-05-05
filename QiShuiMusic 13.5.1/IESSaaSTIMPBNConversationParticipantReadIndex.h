@interface IESSaaSTIMPBNConversationParticipantReadIndex : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSMutableArray participantReadIndexArray;
@property (nonatomic) Q participantReadIndexArray_Count;
+ (id)descriptor;
@end
