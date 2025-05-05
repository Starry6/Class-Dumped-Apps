@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject
@property (nonatomic) I threshold;
@property (nonatomic) S sleepDuration_ms;
- (unsigned int)threshold;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setThreshold:;
- (id)initWithThreshold:sleepDuration:;
- (unsigned short)sleepDuration_ms;
- (void)setSleepDuration_ms:;
+ (BOOL)supportsSecureCoding;
@end
