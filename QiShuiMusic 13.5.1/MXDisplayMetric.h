@interface MXDisplayMetric : MXMetric
@property (nonatomic) MXAverage averagePixelLuminance;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAveragePictureLevel:;
- (id)averagePixelLuminance;
+ (BOOL)supportsSecureCoding;
@end
