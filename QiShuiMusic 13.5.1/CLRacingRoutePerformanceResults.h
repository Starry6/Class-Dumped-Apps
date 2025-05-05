@interface CLRacingRoutePerformanceResults : NSObject
@property (nonatomic) double timeAhead_s;
@property (nonatomic) double currentDistance_m;
@property (nonatomic) double referenceDistance_m;
@property (nonatomic) double currentAveragePace_s_per_m;
@property (nonatomic) double totalOverlapDistance_m;
@property (nonatomic) Q state;
- (unsigned long long)state;
- (id)initWithTimeAhead:currentDistance:referenceDistance:currentAveragePace:totalOverlapDistance:state:;
- (double)timeAhead_s;
- (double)currentDistance_m;
- (double)referenceDistance_m;
- (double)currentAveragePace_s_per_m;
- (double)totalOverlapDistance_m;
@end
