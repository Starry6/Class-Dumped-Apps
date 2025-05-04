@interface AWEUserPerfProcessModel : NSObject
@property (nonatomic) NSMutableDictionary loginProcessKeyEventTimeRecorder;
@property (nonatomic) double lastProcessKeyEventTimeStamp;
@property (nonatomic) double startTimeStampForProcess;
@property (nonatomic) double totalProcessDuration;
@property (nonatomic) NSMutableString errorCodeListString;
@property (nonatomic) BOOL hasStartProcess;
- (void)generateDefaultValue;
- (void)setHasStartProcess:;
- (void)setTotalProcessDuration:;
- (void)setLoginProcessKeyEventTimeRecorder:;
- (void)setErrorCodeListString:;
- (id)loginProcessKeyEventTimeRecorder;
- (double)lastProcessKeyEventTimeStamp;
- (void)setLastProcessKeyEventTimeStamp:;
- (double)startTimeStampForProcess;
- (void)setStartTimeStampForProcess:;
- (double)totalProcessDuration;
- (id)errorCodeListString;
- (BOOL)hasStartProcess;
- (id)init;
- (void).cxx_destruct;
@end
