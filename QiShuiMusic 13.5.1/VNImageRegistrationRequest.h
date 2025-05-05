@interface VNImageRegistrationRequest : VNTargetedImageRequest
- (void).cxx_destruct;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:;
- (id)cachedFloatingImageRegistrationSignatureReturningError:;
- (BOOL)getReferenceImageBuffer:registrationSignature:forRequestPerformingContext:error:;
@end
