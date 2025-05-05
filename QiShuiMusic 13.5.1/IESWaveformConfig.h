@interface IESWaveformConfig : NSObject
@property (nonatomic) q waveType;
@property (nonatomic) NSInteger pointCount;
@property (nonatomic) double durationPerFrame;
@property (nonatomic) NSInteger pointPersec;
- (void)setPointPersec:;
- (double)durationPerFrame;
- (int)pointPersec;
- (void)setDurationPerFrame:;
- (void)setWaveType:;
- (long long)waveType;
- (int)pointCount;
- (void)setPointCount:;
@end
