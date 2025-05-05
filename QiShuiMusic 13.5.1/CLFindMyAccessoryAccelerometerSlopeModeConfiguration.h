@interface CLFindMyAccessoryAccelerometerSlopeModeConfiguration : NSObject
@property (nonatomic) float threshold;
@property (nonatomic) C sampleCount;
@property (nonatomic) C sampleRate;
- (float)threshold;
- (unsigned char)sampleCount;
- (void)setSampleCount:;
- (unsigned char)sampleRate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setThreshold:;
- (void)setSampleRate:;
- (id)initWithThreshold:sampleCount:sampleRate:;
+ (BOOL)supportsSecureCoding;
+ (unsigned char)minimumSampleCount;
+ (unsigned char)maximumSampleCount;
+ (float)minimumThreshold;
+ (float)maximumThreshold;
@end
