@interface ADEspressoRunnerV2 : NSObject
@property (nonatomic) NSString networkVersionString;
@property (nonatomic) ^{e5rt_execution_stream_operation=} operation;
@property (nonatomic) ^{e5rt_execution_stream=} stream;
- (id)stream;
- (id)operation;
- (void)setStream:;
- (long long)execute;
- (void)dealloc;
- (void)setOperation:;
- (void).cxx_destruct;
- (id)networkVersionString;
- (long long)updateFeedbackLoopInputBuffer:inputDescriptor:outputBuffer:outputDescriptor:;
- (id)createAndRegisterPixelBufferForDescriptor:;
- (id)initWithPath:forEngine:configurationName:;
- (id)registerDescriptor:;
- (long long)registerPixelBuffer:forDescriptor:;
- (long long)registerIOSurface:forDescriptor:;
- (long long)registerPixelBufferPtr:forDescriptor:;
- (id)retainPortForDescriptor:usingOperation:;
- (long long)registerIOSurface:forDescriptor:usingOperation:;
- (long long)registerIOSurface:forTensorPort:;
- (long long)registerIOSurface:forSurfacePort:surfaceDesc:;
- (long long)registerPixelBufferPtr:forDescriptor:forSurfacePort:;
- (BOOL)isSamePixelFormat:e5rtFormat:;
- (long long)registerPixelBufferPtr:forDescriptor:forTensorPort:;
- (long long)registerPixelBufferPtr:forDescriptor:usingOperation:;
- (long long)prewireSurfaces:toDescriptors:;
@end
