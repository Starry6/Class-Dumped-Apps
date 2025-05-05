@interface BWInferenceSchedulerFramebufferBuilder : NSObject
- (void)dealloc;
- (id)newFramebuffer;
- (id)initWithInferenceRequirements:dependencyProvider:formatProvider:;
@end
