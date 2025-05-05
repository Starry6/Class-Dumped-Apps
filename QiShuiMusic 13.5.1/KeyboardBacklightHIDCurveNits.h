@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve
@property (nonatomic) float level;
- (void)dealloc;
- (float)level;
- (float)brightness;
- (void)setBrightness:;
- (id)initWithQueue:device:;
- (void)setBrightness:withFadeSpeed:commit:;
- (float)convertNitsToLevelPercentage:;
- (float)maxLevelPercentage;
- (float)maxCapableNits;
- (float)minCapableNits;
@end
