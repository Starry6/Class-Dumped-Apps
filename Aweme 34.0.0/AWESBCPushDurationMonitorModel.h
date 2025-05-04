@interface AWESBCPushDurationMonitorModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString event;
- (void)recordStart;
- (void)recordEnd;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setEvent:;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (id)event;
- (double)startTime;
@end
