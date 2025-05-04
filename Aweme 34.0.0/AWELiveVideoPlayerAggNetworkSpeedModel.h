@interface AWELiveVideoPlayerAggNetworkSpeedModel : NSObject
@property (nonatomic) NSMutableArray networkSpeedArray;
@property (nonatomic) q sumDataLenth;
@property (nonatomic) q sumInterval;
@property (nonatomic) q avgSpeed;
@property (nonatomic) double endTime;
- (long long)sumDataLenth;
- (void)setSumDataLenth:;
- (long long)sumInterval;
- (void)setSumInterval:;
- (void)setAvgSpeed:;
- (id)networkSpeedArray;
- (void)setNetworkSpeedArray:;
- (long long)avgSpeed;
- (id)init;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
@end
