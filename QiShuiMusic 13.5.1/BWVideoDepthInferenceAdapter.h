@interface BWVideoDepthInferenceAdapter : NSObject
- (id)init;
- (void)dealloc;
- (id)inferenceProvidersForType:version:configuration:resourceProvider:status:;
@end
