@interface IESSaaSTIMPBNCallVoipResponseBody : GPBMessage
@property (nonatomic) IESSaaSTIMPBNVoipInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) GPBInt64Array calleeIdsArray;
@property (nonatomic) Q calleeIdsArray_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) NSString refChannelId;
@property (nonatomic) BOOL hasRefChannelId;
@property (nonatomic) NSInteger voipMode;
@property (nonatomic) BOOL hasVoipMode;
+ (id)descriptor;
@end
