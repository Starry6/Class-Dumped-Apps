@interface MPSGraphCaptureContext : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOutputFolderPath:graphName:;
- (void)setInputBuffers:names:;
- (void)setOutputBuffers:names:;
- (void)setFeeds:names:;
- (void)setResults:names:;
- (id)dataWithBytes:length:;
- (void)setConstantBuffer:;
- (id)constantBufferName:;
- (id)addFunctionWithBitCode:metalFunctionName:reflection:;
- (void)addPipeline:functionName:withReflection:;
- (id)reflectionForPipeline:;
- (id)functionNameForPipeline:;
- (id)wrapComputeEncoder:;
- (void)createNodeWithDispatchInfo:encoderContext:;
- (void)writeToJsonFile:;
- (void)writejsonFile:;
@end
