@interface CPLDeleteAlbumExtractionStep : CPLBatchExtractionStep
@property (nonatomic) Q maximumCount;
- (id)shortDescription;
- (unsigned long long)maximumCount;
- (BOOL)extractToBatch:maximumCount:maximumResourceSize:error:;
- (BOOL)shouldResetFromThisStepWithIncomingChange:;
- (id)initWithStorage:scopeIdentifier:maximumCount:;
@end
