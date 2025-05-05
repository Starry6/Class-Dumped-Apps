@interface IESSaaSTIMPBNUpsertConversationSettingExtInfoResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationSettingInfo settingInfo;
@property (nonatomic) BOOL hasSettingInfo;
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
