@interface AWEUserPerfShowModel : NSObject
@property (nonatomic) NSMutableDictionary loginShowKeyEventTimeRecorder;
@property (nonatomic) double lastShowKeyEventTimeStamp;
@property (nonatomic) double startTimeStampForShow;
@property (nonatomic) double totalShowDuration;
@property (nonatomic) BOOL hasStartShow;
- (void)setHasStartShow:;
- (void)setTotalShowDuration:;
- (void)setLoginShowKeyEventTimeRecorder:;
- (void)generateDefaultValue;
- (id)loginShowKeyEventTimeRecorder;
- (double)lastShowKeyEventTimeStamp;
- (void)setLastShowKeyEventTimeStamp:;
- (double)startTimeStampForShow;
- (void)setStartTimeStampForShow:;
- (double)totalShowDuration;
- (BOOL)hasStartShow;
- (id)init;
- (void).cxx_destruct;
@end
