@interface AWELiveVideoPlayerNetworkSpeedModel : NSObject
@property (nonatomic) q dataLenth;
@property (nonatomic) q interval;
@property (nonatomic) q speed;
@property (nonatomic) double time;
- (void)setDataLenth:;
- (long long)dataLenth;
- (double)time;
- (void)setTime:;
- (long long)interval;
- (void)setSpeed:;
- (long long)speed;
- (id)init;
- (void)setInterval:;
@end
