@interface SNDetectSignalThresholdRequest : NSObject
@property (nonatomic) double sampleRate;
@property (nonatomic) I blockSize;
@property (nonatomic) double magnitudeThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (double)sampleRate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSampleRate:;
- (void)setBlockSize:;
- (id)createAnalyzerWithError:;
- (double)magnitudeThreshold;
- (void)setMagnitudeThreshold:;
+ (BOOL)supportsSecureCoding;
@end
