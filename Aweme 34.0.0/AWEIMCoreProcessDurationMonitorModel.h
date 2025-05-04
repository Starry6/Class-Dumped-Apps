@interface AWEIMCoreProcessDurationMonitorModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordStart;
- (void)recordEnd;
- (void)recordEndWithTime:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setEvent:;
- (void)setUserInfo:;
- (id)userInfo;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (id)event;
- (double)startTime;
@end
