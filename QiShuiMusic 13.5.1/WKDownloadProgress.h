@interface WKDownloadProgress : NSProgress
- (void)publish;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)unpublish;
- (void)performCancel;
- (id)initWithDownloadTask:download:URL:sandboxExtension:;
@end
