@interface IESSaaSTIMPBNVoipInfo : GPBMessage
@property (nonatomic) q userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) NSString deviceId;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) NSString channelId;
@property (nonatomic) BOOL hasChannelId;
@property (nonatomic) NSString token;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) q callerId;
@property (nonatomic) BOOL hasCallerId;
@property (nonatomic) q createdTimeMs;
@property (nonatomic) BOOL hasCreatedTimeMs;
@property (nonatomic) q updatedTimeMs;
@property (nonatomic) BOOL hasUpdatedTimeMs;
@property (nonatomic) q conShortId;
@property (nonatomic) BOOL hasConShortId;
@property (nonatomic) NSInteger vType;
@property (nonatomic) BOOL hasVType;
@property (nonatomic) q srvMsgId;
@property (nonatomic) BOOL hasSrvMsgId;
+ (id)descriptor;
@end
