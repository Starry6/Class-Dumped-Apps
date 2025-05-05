@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep
- (id)shortDescription;
- (void)reset;
- (BOOL)extractToBatch:maximumCount:maximumResourceSize:error:;
- (BOOL)shouldResetFromThisStepWithIncomingChange:;
@end
