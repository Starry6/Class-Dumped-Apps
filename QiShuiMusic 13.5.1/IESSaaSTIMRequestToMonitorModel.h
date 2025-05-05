@interface IESSaaSTIMRequestToMonitorModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q methodType;
- (long long)methodType;
- (void)setMethodType:;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
@end
