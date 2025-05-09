@interface BU_AFURLSessionManagerTaskDelegate : NSObject
@property (nonatomic) BU_AFURLSessionManager manager;
@property (nonatomic) NSMutableData mutableData;
@property (nonatomic) NSProgress uploadProgress;
@property (nonatomic) NSProgress downloadProgress;
@property (nonatomic) NSURL downloadFileURL;
@property (nonatomic) @? downloadTaskDidFinishDownloading;
@property (nonatomic) @? uploadProgressBlock;
@property (nonatomic) @? downloadProgressBlock;
@property (nonatomic) @? completionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadTaskDidFinishDownloading;
- (void)setDownloadTaskDidFinishDownloading:;
- (id)downloadProgress;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setDownloadProgress:;
- (id)initWithTask:;
- (void)setMutableData:;
- (void)dealloc;
- (id)mutableData;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (void)setCompletionHandler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (id)manager;
- (void)URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:;
- (id)uploadProgressBlock;
- (void)setManager:;
- (void).cxx_destruct;
- (void)URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:;
- (void)setUploadProgressBlock:;
- (id)completionHandler;
- (id)downloadFileURL;
- (void)setDownloadFileURL:;
- (id)downloadProgressBlock;
- (void)setDownloadProgressBlock:;
- (id)uploadProgress;
- (void)setUploadProgress:;
@end
