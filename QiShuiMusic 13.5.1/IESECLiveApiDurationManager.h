@interface IESECLiveApiDurationManager : NSObject
@property (nonatomic) NSMutableDictionary startTimeDict;
@property (nonatomic) NSMutableDictionary durationDict;
- (id)durationDict;
- (id)getDuration:caller:;
- (void)requestEnd:caller:;
- (void)requestStart:caller:;
- (void)setDurationDict:;
- (void)setStartTimeDict:;
- (id)startTimeDict;
- (void).cxx_destruct;
+ (double)currentTime;
@end
