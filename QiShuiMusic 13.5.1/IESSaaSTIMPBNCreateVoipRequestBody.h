@interface IESSaaSTIMPBNCreateVoipRequestBody : GPBMessage
@property (nonatomic) NSString idempotentId;
@property (nonatomic) BOOL hasIdempotentId;
@property (nonatomic) NSInteger vType;
@property (nonatomic) BOOL hasVType;
@property (nonatomic) q conShortId;
@property (nonatomic) BOOL hasConShortId;
@property (nonatomic) q srvMsgId;
@property (nonatomic) BOOL hasSrvMsgId;
@property (nonatomic) NSString refChannelId;
@property (nonatomic) BOOL hasRefChannelId;
@property (nonatomic) NSInteger voipMode;
@property (nonatomic) BOOL hasVoipMode;
+ (id)descriptor;
@end
