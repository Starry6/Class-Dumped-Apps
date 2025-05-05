@interface IESSaaSTIMPBNResponse : GPBMessage
@property (nonatomic) NSInteger cmd;
@property (nonatomic) BOOL hasCmd;
@property (nonatomic) q sequenceId;
@property (nonatomic) BOOL hasSequenceId;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) NSString errorDesc;
@property (nonatomic) BOOL hasErrorDesc;
@property (nonatomic) NSInteger inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (nonatomic) IESSaaSTIMPBNResponseBody body;
@property (nonatomic) BOOL hasBody;
@property (nonatomic) NSString logId;
@property (nonatomic) BOOL hasLogId;
@property (nonatomic) NSMutableDictionary headers;
@property (nonatomic) Q headers_Count;
@property (nonatomic) q startTimeStamp;
@property (nonatomic) BOOL hasStartTimeStamp;
@property (nonatomic) q requestArrivedTime;
@property (nonatomic) BOOL hasRequestArrivedTime;
@property (nonatomic) q serverExecutionEndTime;
@property (nonatomic) BOOL hasServerExecutionEndTime;
@property (nonatomic) NSInteger retryCount;
@property (nonatomic) BOOL hasRetryCount;
+ (id)descriptor;
@end
