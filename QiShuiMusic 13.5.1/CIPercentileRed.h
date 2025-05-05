@interface CIPercentileRed : CIFilter
@property (nonatomic) NSNumber inputPercentile;
@property (nonatomic) NSNumber inputCount;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputNormalize;
@property (nonatomic) NSNumber inputClip;
@property (nonatomic) NSNumber inputHard;
- (void)setInputCount:;
- (id)inputCount;
- (id)inputScale;
- (void)setInputScale:;
- (id)outputImage;
- (id)inputPercentile;
- (void)setInputPercentile:;
- (id)inputNormalize;
- (void)setInputNormalize:;
- (id)inputClip;
- (void)setInputClip:;
- (id)inputHard;
- (void)setInputHard:;
+ (id)customAttributes;
@end
