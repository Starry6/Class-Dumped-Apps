@interface TTVideoEnginePlayDuration : NSObject
@property (nonatomic) q state;
@property (nonatomic) double playedDuration;
@property (nonatomic) double startPlayTime;
- (double)getPlayedDuration;
- (double)playedDuration;
- (void)setPlayedDuration:;
- (void)setStartPlayTime:;
- (double)startPlayTime;
- (id)init;
- (void)setState:;
- (void)start;
- (void)stop;
- (void)clear;
- (long long)state;
- (void)reset;
@end
