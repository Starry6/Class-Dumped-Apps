@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (id)initWithLibrary:;
- (void)URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void).cxx_destruct;
- (void)URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
- (id)_defaultDownloadSessionForAttachment:;
+ (id)log;
@end
