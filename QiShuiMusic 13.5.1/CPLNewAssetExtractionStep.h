@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep
@property (nonatomic) Q maximumCount;
- (id)shortDescription;
- (unsigned long long)maximumCount;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)extractToBatch:maximumCount:maximumResourceSize:error:;
- (BOOL)shouldResetFromThisStepWithIncomingChange:;
- (id)initWithStorage:scopeIdentifier:maximumCount:;
@end
