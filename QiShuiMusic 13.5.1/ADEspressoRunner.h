@interface ADEspressoRunner : NSObject
- (long long)execute;
- (void).cxx_destruct;
- (id)networkVersionString;
- (long long)updateFeedbackLoopInputBuffer:inputDescriptor:outputBuffer:outputDescriptor:;
- (id)createAndRegisterPixelBufferForDescriptor:;
- (id)initWithPath:forEngine:configurationName:;
- (id)registerDescriptor:;
- (long long)registerPixelBuffer:forDescriptor:;
- (long long)registerIOSurface:forDescriptor:;
@end
