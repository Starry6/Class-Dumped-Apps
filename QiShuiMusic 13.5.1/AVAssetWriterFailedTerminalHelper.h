@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper
- (void)dealloc;
- (void)finishWritingWithCompletionHandler:;
- (void)finishWriting;
- (id)error;
- (void)flush;
- (void)flushSegment;
- (long long)status;
- (void)endSessionAtSourceTime:;
- (id)initWithConfigurationState:;
- (void)startSessionAtSourceTime:;
- (void)setFinishWritingDelegate:;
- (id)initWithConfigurationState:terminalError:;
@end
