@interface HTSBootLogger : NSObject
@property (nonatomic) NSMutableArray mainData;
@property (nonatomic) NSMutableArray taltolData;
@property (nonatomic) NSArray mainMetrics;
@property (nonatomic) NSArray totalMetrics;
- (void)logName:duration:startTime:endTime:;
- (id)mainData;
- (id)mainMetrics;
- (void)setMainData:;
- (void)setTaltolData:;
- (id)taltolData;
- (id)totalMetrics;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedLogger;
@end
