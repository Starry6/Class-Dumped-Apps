@interface IESSaaSTIMPBNSetGroupInfoResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNGroupInfo groupInfo;
@property (nonatomic) BOOL hasGroupInfo;
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
