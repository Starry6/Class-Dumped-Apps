@interface IESSaaSTIMPBNBatchUpdateConversationParticipantResponseBody : GPBMessage
@property (nonatomic) NSMutableArray successParticipantsArray;
@property (nonatomic) Q successParticipantsArray_Count;
@property (nonatomic) NSMutableArray callbackFailedParticipantsArray;
@property (nonatomic) Q callbackFailedParticipantsArray_Count;
@property (nonatomic) GPBInt64Array failedParticipantsArray;
@property (nonatomic) Q failedParticipantsArray_Count;
+ (id)descriptor;
@end
