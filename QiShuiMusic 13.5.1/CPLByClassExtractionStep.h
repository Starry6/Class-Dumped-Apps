@interface CPLByClassExtractionStep : CPLBatchExtractionStep
@property (nonatomic) # extractionClass;
@property (nonatomic) Q maximumCount;
@property (nonatomic) NSString queryDescription;
- (id)shortDescription;
- (unsigned long long)maximumCount;
- (id)queryDescription;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)extractToBatch:maximumCount:maximumResourceSize:error:;
- (BOOL)shouldResetFromThisStepWithIncomingChange:;
- (id)initWithStorage:scopeIdentifier:description:class:maximumCount:query:;
- (Class)extractionClass;
@end
