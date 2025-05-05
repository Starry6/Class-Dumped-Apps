@interface IESMMTimeMachineConfig : NSObject
@property (nonatomic) q timeMachineType;
@property (nonatomic) double beginTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
- (long long)timeMachineType;
- (void)setTimeMachineType:;
- (id)init;
- (double)beginTime;
- (void)setStartTime:;
- (double)startTime;
- (void)setDuration:;
- (void)setBeginTime:;
- (double)duration;
@end
