@interface VNTrackingRequest : VNImageBasedRequest
@property (nonatomic) VNDetectedObjectObservation inputObservation;
@property (nonatomic) Q trackingLevel;
@property (nonatomic) BOOL lastFrame;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)warmUpSession:error:;
- (void).cxx_destruct;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)initWithDetectedObjectObservation:;
- (void)setTrackingLevel:;
- (BOOL)allowsCachingOfResults;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (id)initWithDetectedObjectObservation:completionHandler:;
- (id)newDefaultRequestInstance;
- (void)setInputObservation:;
- (id)inputObservation;
- (void)populateDetectorProcessingOptions:session:;
- (id)_resetTrackerIfNeeded:session:options:error:;
- (unsigned long long)trackingLevel;
- (BOOL)isLastFrame;
- (void)setLastFrame:;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:;
+ (id)trackerTypeForRequestRevision:error:;
@end
