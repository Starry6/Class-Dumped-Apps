@interface IESLiveSlidePerfDropFrameInfo : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSString dropFrameLevel;
@property (nonatomic) Q dropFrameCount;
@property (nonatomic) double frameDuration;
@property (nonatomic) double frameLostTime;
@property (nonatomic) double hitchTime;
@property (nonatomic) BOOL enableNewDropFrameMonitor;
- (unsigned long long)dropFrameCount;
- (id)dropFrameLevel;
- (BOOL)enableNewDropFrameMonitor;
- (double)frameLostTime;
- (double)hitchTime;
- (void)setDropFrameCount:;
- (void)setEnableNewDropFrameMonitor:;
- (void)setFrameLostTime:;
- (void)setHitchTime:;
- (long long)level;
- (void)setTimestamp:;
- (double)timestamp;
- (double)frameDuration;
- (void)setFrameDuration:;
@end
