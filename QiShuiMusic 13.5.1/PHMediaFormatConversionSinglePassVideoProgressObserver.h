@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject
@property (nonatomic) NSProgress progress;
@property (nonatomic) PHMediaFormatConversionRequest request;
@property (nonatomic) NSURL observedFileURL;
@property (nonatomic) NSFileHandle observedFileHandle;
@property (nonatomic) Q lastFileSize;
- (unsigned long long)lastFileSize;
- (void)setProgress:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)request;
- (void)stopObserving;
- (id)progress;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)startObservingProgress:forRequest:;
- (id)observedFileURL;
- (void)setObservedFileURL:;
- (id)observedFileHandle;
- (void)setObservedFileHandle:;
- (void)setLastFileSize:;
@end
