@interface AWEUserPerfFinishModel : NSObject
@property (nonatomic) BOOL hasRecordShowInFinish;
@property (nonatomic) AWEUserEventTrackerInfo loginNotifyInfo;
@property (nonatomic) NSMutableDictionary loginFinishKeyEventTimeRecorder;
@property (nonatomic) double lastFinishKeyEventTimeStamp;
@property (nonatomic) double totalFinishDuration;
- (void)generateDefaultValue;
- (void)setTotalFinishDuration:;
- (void)setLoginFinishKeyEventTimeRecorder:;
- (BOOL)hasRecordShowInFinish;
- (void)setHasRecordShowInFinish:;
- (id)loginNotifyInfo;
- (void)setLoginNotifyInfo:;
- (id)loginFinishKeyEventTimeRecorder;
- (double)lastFinishKeyEventTimeStamp;
- (void)setLastFinishKeyEventTimeStamp:;
- (double)totalFinishDuration;
- (id)init;
- (void).cxx_destruct;
@end
