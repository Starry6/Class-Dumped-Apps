@interface IESMMAudioFade : NSObject
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) q fadeInCurve;
@property (nonatomic) q fadeOutCurve;
@property (nonatomic) double totalDuration;
- (void)setFadeInCurve:;
- (long long)fadeInCurve;
- (long long)fadeOutCurve;
- (id)initWithConfig:samplerate:channels:;
- (void)processInput:output:samplesPerChannel:timestamp:;
- (void)processInputMono:output:samplesPerChannel:timestamp:;
- (void)setFadeOutCurve:;
- (void)updateWithConfig:;
- (id)init;
- (void)dealloc;
- (void)setFadeInDuration:;
- (double)fadeOutDuration;
- (double)totalDuration;
- (double)fadeInDuration;
- (void)setFadeOutDuration:;
- (void)setTotalDuration:;
@end
