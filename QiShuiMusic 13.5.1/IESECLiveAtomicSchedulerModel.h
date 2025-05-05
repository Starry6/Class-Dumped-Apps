@interface IESECLiveAtomicSchedulerModel : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString action;
@property (nonatomic) @ params;
@property (nonatomic) q scheduleType;
@property (nonatomic) NSNumber startDelay;
@property (nonatomic) NSNumber interval;
@property (nonatomic) NSNumber repeatTimes;
- (void)setRepeatTimes:;
- (id)repeatTimes;
- (void)setServiceName:;
- (id)action;
- (id)serviceName;
- (void)setAction:;
- (void)setInterval:;
- (void).cxx_destruct;
- (id)params;
- (id)interval;
- (void)setParams:;
- (id)startDelay;
- (void)setStartDelay:;
- (long long)scheduleType;
- (void)setScheduleType:;
@end
