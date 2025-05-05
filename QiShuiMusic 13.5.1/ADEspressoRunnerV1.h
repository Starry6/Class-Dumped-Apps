@interface ADEspressoRunnerV1 : NSObject
- (long long)execute;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)networkVersionString;
- (long long)updateFeedbackLoopInputBuffer:inputDescriptor:outputBuffer:outputDescriptor:;
- (id)createAndRegisterPixelBufferForDescriptor:;
- (id)initWithPath:forEngine:configurationName:;
- (id)registerDescriptor:;
- (long long)registerPixelBuffer:forDescriptor:;
- (long long)registerIOSurface:forDescriptor:;
- (BOOL)isVImageBindingSupportedForFormat:;
- (int)bindPixelBufferAsVImage:toBlob:;
- (BOOL)isCVPixelBufferBindingSupportedForFormat:;
- (BOOL)isDirectBindingSupportedForFormat:;
- (long long)registerPixelBufferPtr:forDescriptor:;
- (void)unlockAllVImageBindBuffers;
@end
