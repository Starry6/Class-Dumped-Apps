@interface ISRateCurveRequest : NSObject
@property (nonatomic) {?=qiIq} targetTime;
@property (nonatomic) double duration;
@property (nonatomic) float initialRate;
@property (nonatomic) ISAVPlayer avPlayer;
@property (nonatomic) @? progressHandler;
- (id)progressHandler;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)targetTime;
- (double)duration;
- (id)avPlayer;
- (id)initWithTargetTime:duration:initialRate:avPlayer:progressHandler:;
- (void)_stepDownRate;
- (void)_didReachTargetTime;
- (void)_stopObservingPlayer;
- (float)initialRate;
@end
