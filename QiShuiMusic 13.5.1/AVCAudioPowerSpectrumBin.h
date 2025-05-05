@interface AVCAudioPowerSpectrumBin : NSObject
@property (nonatomic) float minFrequency;
@property (nonatomic) float maxFrequency;
@property (nonatomic) float powerLevel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (float)minFrequency;
- (float)maxFrequency;
- (float)powerLevel;
- (void)assign:;
+ (BOOL)supportsSecureCoding;
@end
