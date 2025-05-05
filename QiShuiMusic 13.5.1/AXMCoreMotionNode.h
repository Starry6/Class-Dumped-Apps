@interface AXMCoreMotionNode : AXMSourceNode
@property (nonatomic) double lastSampleTime;
@property (nonatomic) Q samplesPerSecond;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithIdentifier:;
- (void)nodeInitialize;
- (void)triggerWithCoreMotionManager:deviceOrientation:cacheKey:resultHandler:;
- (unsigned long long)samplesPerSecond;
- (void)setSamplesPerSecond:;
- (double)lastSampleTime;
- (void)setLastSampleTime:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
