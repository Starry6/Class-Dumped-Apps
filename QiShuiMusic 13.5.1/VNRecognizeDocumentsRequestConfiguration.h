@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration
@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) Q maximumCandidateCount;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (BOOL)detectionOnly;
- (void)setDetectionOnly:;
- (BOOL)usesAlternateLineGrouping;
- (void)setUsesAlternateLineGrouping:;
- (unsigned long long)maximumCandidateCount;
- (void)setMaximumCandidateCount:;
@end
