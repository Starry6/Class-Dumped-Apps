@interface WBSFormAutoFillMetadataCorrector : NSObject
@property (nonatomic) NSString domain;
- (id)initWithDomain:;
- (id)init;
- (void).cxx_destruct;
- (id)domain;
- (id)bestAvailableMetadataFromMetadata:;
- (id)bestAvailableMetadataFromControlMetadata:;
- (void)enqueueCorrectionsRequestForFormMetadata:completionHandler:;
- (void)_commonInitWithDomain:correctionsStore:;
- (BOOL)hasAttemptedToCorrectMetadata:;
@end
