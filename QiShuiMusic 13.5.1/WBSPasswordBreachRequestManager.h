@interface WBSPasswordBreachRequestManager : NSObject
- (void)_fetchBucketAtURL:withClientBlindedHash:completionHandler:;
- (void)fetchHighFrequencyBucketWithCompletionHandler:;
- (id)initWithContext:;
- (void)fetchLowFrequencyBucketsForBucketIdentifiersAndClientBlindedHashes:completionHandler:;
- (void)_buildRequestWithURL:headers:completionHandler:;
- (void).cxx_destruct;
@end
