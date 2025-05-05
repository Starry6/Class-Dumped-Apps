@interface IESMMAudioScratching : NSObject
- (id)initWithSampleRate:channels:;
- (int)processInput:output:samplesPerCh:;
- (void)dealloc;
- (void)reset;
- (void)setSpeedRatio:;
@end
