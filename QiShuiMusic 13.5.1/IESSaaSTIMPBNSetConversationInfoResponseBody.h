@interface IESSaaSTIMPBNSetConversationInfoResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationInfo conversation;
@property (nonatomic) BOOL hasConversation;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
+ (id)descriptor;
@end
