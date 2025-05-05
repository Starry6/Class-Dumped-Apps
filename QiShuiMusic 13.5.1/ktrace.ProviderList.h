@interface ktrace.ProviderList : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldStartTracingWithConfiguration:error:;
- (void)willFinishWithCatalog:file:;
- (void)configureWithSession:;
- (void)configurePostprocessingWithSession:;
- (void)postprocessingCompleteWithFile:;
- (id)initWithMachine:;
- (BOOL)containsWithName:;
- (BOOL)addWithName:options:logger:flags:;
- (void)willStartTracingWithFile:;
- (void)didStartTracingWithFile:;
- (void)willEndTracingWithFile:;
- (void)didEndTracingWithFile:;
- (id)describeWithChunk:;
@end
