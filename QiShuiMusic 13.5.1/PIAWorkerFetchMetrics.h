@interface PIAWorkerFetchMetrics : NSObject
@property (nonatomic) Q fetchType;
@property (nonatomic) double fetchDuration;
- (unsigned long long)fetchType;
- (double)fetchDuration;
- (void)setFetchDuration:;
- (void)setFetchType:;
@end
