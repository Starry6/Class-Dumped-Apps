@interface VCMediaStreamStats : NSObject
@property (nonatomic) I bitrateKbps;
@property (nonatomic) I maxBitrateKbps;
@property (nonatomic) I minBitrateKbps;
@property (nonatomic) double framerate;
@property (nonatomic) double maxFramerate;
@property (nonatomic) double minFramerate;
@property (nonatomic) S maxFrameDurationMillis;
- (id)init;
- (void)dealloc;
- (double)framerate;
- (void)recordDataWithSize:atTime:;
- (unsigned int)bitrateKbps;
- (void)updateMinMaxSinceTime:;
- (double)getFramerateSinceTime:;
- (unsigned int)getBitrateKbpsSinceTime:;
- (unsigned int)minBitrateKbps;
- (void)setMinBitrateKbps:;
- (unsigned int)maxBitrateKbps;
- (void)setMaxBitrateKbps:;
- (double)minFramerate;
- (void)setMinFramerate:;
- (double)maxFramerate;
- (void)setMaxFramerate:;
- (unsigned short)maxFrameDurationMillis;
- (void)setMaxFrameDurationMillis:;
@end
