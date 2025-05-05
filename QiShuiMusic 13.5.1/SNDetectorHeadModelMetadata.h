@interface SNDetectorHeadModelMetadata : NSObject
@property (nonatomic) NSNumber sampleRate;
@property (nonatomic) NSString featureExtractorIdentifier;
@property (nonatomic) NSNumber windowSizeInSamples;
@property (nonatomic) NSNumber hopSizeInSamples;
@property (nonatomic) NSString soundIdentifier;
- (id)sampleRate;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSampleRate:;
- (id)soundIdentifier;
- (id)featureExtractorIdentifier;
- (void)setFeatureExtractorIdentifier:;
- (id)windowSizeInSamples;
- (void)setWindowSizeInSamples:;
- (id)hopSizeInSamples;
- (void)setHopSizeInSamples:;
- (void)setSoundIdentifier:;
@end
