@interface VKCGlowParameters : NSObject
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;
@property (nonatomic) double blurRadius;
@property (nonatomic) double strokeLengthFraction;
@property (nonatomic) double strokeTaperLength;
@property (nonatomic) double minOpacity;
@property (nonatomic) double maxOpacity;
@property (nonatomic) Q strokeCount;
- (double)blurRadius;
- (void)setBlurRadius:;
- (unsigned long long)strokeCount;
- (double)minThickness;
- (void)setMinThickness:;
- (double)maxThickness;
- (void)setMaxThickness:;
- (double)strokeLengthFraction;
- (void)setStrokeLengthFraction:;
- (double)strokeTaperLength;
- (void)setStrokeTaperLength:;
- (double)minOpacity;
- (void)setMinOpacity:;
- (double)maxOpacity;
- (void)setMaxOpacity:;
- (void)setStrokeCount:;
@end
