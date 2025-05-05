@interface IESSaaSTIMPBNConversationSetRoleResponseBody : GPBMessage
@property (nonatomic) GPBInt64Array successParticipantsArray;
@property (nonatomic) Q successParticipantsArray_Count;
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
+ (id)descriptor;
@end
