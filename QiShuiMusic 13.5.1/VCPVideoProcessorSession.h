@interface VCPVideoProcessorSession : NSObject
@property (nonatomic) I orientation;
- (id)init;
- (unsigned int)orientation;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setOrientation:;
- (BOOL)addRequest:withConfiguration:error:;
- (BOOL)removeRequest:error:;
- (BOOL)shouldProcessSampleWithTimeRange:atSamplingInterval:;
- (BOOL)processSampleBuffer:withEndTime:error:;
- (BOOL)processSampleBuffer:error:;
- (BOOL)flushWithEndTime:error:;
@end
