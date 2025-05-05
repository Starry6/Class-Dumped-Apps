@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
@property (nonatomic) NSOperation transitionToTerminalStatusOperation;
- (void)dealloc;
- (void)cancelWriting;
- (id)initWithConfigurationState:finishWritingOperations:figAssetWriterCallbackContextToken:;
- (id)transitionToTerminalStatusOperation;
- (long long)status;
- (void)_finishWritingOperationsDidFinish;
@end
