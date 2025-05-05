@interface IESSaaSTIMPBNConversationRemoveParticipantsRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) GPBInt64Array participantsArray;
@property (nonatomic) Q participantsArray_Count;
@property (nonatomic) NSMutableDictionary bizExt;
@property (nonatomic) Q bizExt_Count;
+ (id)descriptor;
@end
