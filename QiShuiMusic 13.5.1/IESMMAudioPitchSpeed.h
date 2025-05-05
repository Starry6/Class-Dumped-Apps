@interface IESMMAudioPitchSpeed : IESMMObject
@property (nonatomic) float ratio;
@property (nonatomic) BOOL reservePitch;
- (void)getResult:samples:;
- (id)initWithSampleRate:channels:config:;
- (void)process:samples:isFinal:;
- (BOOL)reservePitch;
- (void)setReservePitch:;
- (void)updateSpeedConfig:;
- (int)available;
- (void)dealloc;
- (void)reset;
- (float)ratio;
- (void)setRatio:;
@end
