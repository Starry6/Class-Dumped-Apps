@interface IESSaaSTIMPBNBroadcastSendMessageResponseBody : GPBMessage
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
+ (id)descriptor;
@end
