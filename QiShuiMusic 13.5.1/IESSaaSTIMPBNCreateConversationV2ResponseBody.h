@interface IESSaaSTIMPBNCreateConversationV2ResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationInfoV2 conversation;
@property (nonatomic) BOOL hasConversation;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
+ (id)descriptor;
@end
