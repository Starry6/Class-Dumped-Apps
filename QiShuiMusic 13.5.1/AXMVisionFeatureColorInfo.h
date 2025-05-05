@interface AXMVisionFeatureColorInfo : NSObject
@property (nonatomic) NSArray mainColors;
@property (nonatomic) NSArray mainColorWeights;
@property (nonatomic) double remainingColorWeight;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setMainColors:weights:;
- (void)enumerateMainColors:;
- (double)remainingColorWeight;
- (void)setRemainingColorWeight:;
- (id)mainColors;
- (void)setMainColors:;
- (id)mainColorWeights;
- (void)setMainColorWeights:;
+ (BOOL)supportsSecureCoding;
@end
