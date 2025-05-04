@interface AWEIMMixPhotoRequestTracker : NSObject
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL success;
@property (nonatomic) q errorCode;
- (id)con;
- (void)setCon:;
- (id)initWithConversation:extraInfo:;
- (void)stopEvent:success:error:;
- (void)stopEvent:success:error:stage:;
- (id)initWithConversationID:extraInfo:;
- (void)setErrorCode:;
- (void)setStartTime:;
- (double)endTime;
- (long long)errorCode;
- (void)setEndTime:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (double)startTime;
- (BOOL)success;
- (void)start;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
