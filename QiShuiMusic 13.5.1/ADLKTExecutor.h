@interface ADLKTExecutor : NSObject
- (id)initWithSize:;
- (void).cxx_destruct;
- (id)createPixelBufferForOpticalFlow;
- (id)initWithDescriptor:forLayout:;
- (long long)executeWithFrame:createOpticalFlowBuffer:;
- (long long)executeWithFrame:intoOpticalFlowBuffer:;
@end
