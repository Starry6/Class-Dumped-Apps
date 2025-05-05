@interface GKNoiseMap : NSObject
@property (nonatomic) NSDictionary gradientColors;
@property (nonatomic)  size;
@property (nonatomic)  origin;
@property (nonatomic)  sampleCount;
@property (nonatomic) BOOL seamless;
- (id)sampleCount;
- (id)init;
- (void)dealloc;
- (id)origin;
- (id)gradientColors;
- (void).cxx_destruct;
- (id)size;
- (void)setGradientColors:;
- (int)mapIndexX:y:;
- (id)initWithNoise:;
- (id)initWithNoise:size:origin:sampleCount:seamless:;
- (id)__colorData;
- (float)valueAtPosition:;
- (float)interpolatedValueAtPosition:;
- (void)setValue:atPosition:;
- (BOOL)isSeamless;
+ (id)noiseMapWithNoise:;
+ (id)noiseMapWithNoise:size:origin:sampleCount:seamless:;
@end
