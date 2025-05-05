@interface IESSaaSTIMPBNClientACKRequestBody : GPBMessage
@property (nonatomic) q startTimeStamp;
@property (nonatomic) BOOL hasStartTimeStamp;
@property (nonatomic) NSInteger cmd;
@property (nonatomic) BOOL hasCmd;
@property (nonatomic) NSInteger networkType;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) NSString logid;
@property (nonatomic) BOOL hasLogid;
@property (nonatomic) q clientTimeStamp;
@property (nonatomic) BOOL hasClientTimeStamp;
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
+ (id)descriptor;
@end
