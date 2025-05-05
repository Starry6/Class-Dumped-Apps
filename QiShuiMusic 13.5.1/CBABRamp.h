@interface CBABRamp : NSObject
- (void)dealloc;
- (float)getVersion;
- (id)initWithDisplayModule:andQueue:;
- (void)stopTransition;
- (void)transitionToBrightness:force:periodOverride:period:;
- (void)setPerceptualBrightnessWithFade:length:current:;
@end
