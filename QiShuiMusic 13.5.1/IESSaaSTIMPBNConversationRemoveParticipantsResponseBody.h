@interface IESSaaSTIMPBNConversationRemoveParticipantsResponseBody : GPBMessage
@property (nonatomic) GPBInt64Array failedParticipantsArray;
@property (nonatomic) Q failedParticipantsArray_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) NSMutableArray failedSecParticipantsArray;
@property (nonatomic) Q failedSecParticipantsArray_Count;
+ (id)descriptor;
@end
