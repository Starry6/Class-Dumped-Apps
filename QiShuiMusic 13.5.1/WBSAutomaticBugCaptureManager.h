@interface WBSAutomaticBugCaptureManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)captureLoadingStallWithDomain:detectedProcess:context:;
- (void)captureLoadingStallWithDomain:detectedProcess:context:duration:;
- (void)captureProcessTerminationDueToResourceLimitsWithDomain:detectedProcess:resourceType:;
- (void)captureDeferredNavigationWithDomain:detectedProcess:context:;
- (void)capturePerformanceTimeoutWithDomain:detectedProcess:context:;
- (void)_startLoggingSessionForDomain:detectedProcess:type:subType:context:duration:;
+ (id)sharedManager;
@end
