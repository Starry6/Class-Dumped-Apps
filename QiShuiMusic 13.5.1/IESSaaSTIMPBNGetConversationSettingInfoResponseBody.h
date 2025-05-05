@interface IESSaaSTIMPBNGetConversationSettingInfoResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationSettingInfo conversationSettingInfo;
@property (nonatomic) BOOL hasConversationSettingInfo;
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
