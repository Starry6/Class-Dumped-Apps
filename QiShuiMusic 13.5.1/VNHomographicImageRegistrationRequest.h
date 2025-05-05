@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
- (id)applicableDetectorTypeForRevision:error:;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
@end
