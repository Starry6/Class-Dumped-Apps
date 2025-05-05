@interface CPLBatchExtractionStep : NSObject
@property (nonatomic) <CPLBatchExtractionStrategyStorage> storage;
@property (nonatomic) NSString scopeIdentifier;
- (id)shortDescription;
- (id)scopeIdentifier;
- (id)storage;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)resetConditionallyFromNewIncomingChange:;
- (id)initWithStorage:scopeIdentifier:;
- (BOOL)extractToBatch:maximumCount:maximumResourceSize:error:;
- (BOOL)shouldResetFromThisStepWithIncomingChange:;
@end
