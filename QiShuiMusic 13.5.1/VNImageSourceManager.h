@interface VNImageSourceManager : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)_obtainCreatedCGImageSourceRefAtAddress:forSubSampleFactor:protectedWithUnfairLock:operatingInLowPriority:;
- (id)obtainImageSourceRefWithSubSampleFactor:andLowPriorityHint:error:;
@end
