@interface VEAudioDetectorResult : IESMMObject
@property (nonatomic) Q type;
@property (nonatomic) double peak;
@property (nonatomic) double loudness;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
- (double)loudness;
- (void)setLoudness:;
- (double)peak;
- (void)setPeak:;
@end
