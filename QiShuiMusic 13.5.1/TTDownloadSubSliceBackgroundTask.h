@interface TTDownloadSubSliceBackgroundTask : TTDownloadSliceTask
@property (nonatomic) NSURLSession backgroundSession;
@property (nonatomic) NSURLSessionDownloadTask task;
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString secondUrl;
@property (nonatomic) NSString sliceStorageDir;
@property (nonatomic) q currRangeEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sliceStorageDir;
- (void)clearReferenceCount;
- (long long)currRangeEnd;
- (id)getTempFilePath:;
- (void)initSession;
- (id)initWhithSliceConfig:downloadTask:;
- (BOOL)moveTempToTaskDir:to:;
- (id)secondUrl;
- (void)setCurrRangeEnd:;
- (void)setHttpHeaderField:;
- (void)setInvaildForBgTask;
- (void)setSecondUrl:;
- (void)setSliceStorageDir:;
- (void)cancel;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void)start;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (id)task;
- (void)setTask:;
- (void)URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void)setBackgroundSession:;
- (void).cxx_destruct;
- (id)backgroundSession;
- (void)URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:;
- (id)urlKey;
- (void)setUrlKey:;
@end
