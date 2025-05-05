@interface BWInferenceScheduler : NSObject
- (id)init;
- (void)dealloc;
- (int)performInferencesForConnection:usingInputSampleBuffer:attachingResultsToSampleBuffer:skippingInferencesWithTypes:;
- (void)unregisterInferenceConnection:;
- (unsigned long long)registerInferenceConnection;
- (int)prepareForInferenceRequirements:dependencyProviderSource:formatProvider:pixelBufferPoolProvider:connection:;
@end
