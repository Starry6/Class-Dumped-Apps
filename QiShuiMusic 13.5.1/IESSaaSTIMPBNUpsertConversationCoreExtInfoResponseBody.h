@interface IESSaaSTIMPBNUpsertConversationCoreExtInfoResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationCoreInfo coreInfo;
@property (nonatomic) BOOL hasCoreInfo;
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
