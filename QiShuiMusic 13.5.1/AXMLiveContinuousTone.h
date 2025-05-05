@interface AXMLiveContinuousTone : AXMTone
@property (nonatomic) double phase;
@property (nonatomic) Q framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) Q releaseFrame;
@property (nonatomic) BOOL muted;
- (BOOL)muted;
- (double)phase;
- (void)setFrequency:;
- (void)setMuted:;
- (id)initWithSampleRate:envelope:;
- (void)resetRelease;
- (void)startRelease;
- (void)renderInBuffer:atFrame:numSamples:;
- (unsigned long long)framesRendered;
- (void)setFramesRendered:;
- (BOOL)releasing;
- (void)setReleasing:;
- (unsigned long long)releaseFrame;
- (void)setReleaseFrame:;
@end
