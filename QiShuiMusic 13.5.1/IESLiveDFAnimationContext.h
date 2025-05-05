@interface IESLiveDFAnimationContext : NSObject
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (nonatomic) q state;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL isBegin;
- (BOOL)isBegin;
- (void)setIsBegin:;
- (double)beginTime;
- (void)setState:;
- (double)timeOffset;
- (void)setTimeOffset:;
- (void)setDuration:;
- (void)setBeginTime:;
- (long long)state;
- (double)duration;
@end
