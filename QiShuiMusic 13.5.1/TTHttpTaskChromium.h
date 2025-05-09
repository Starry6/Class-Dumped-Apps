@interface TTHttpTaskChromium : TTHttpTask
@property (nonatomic) NSObject<OS_dispatch_queue> downloadProgressCallbackQueue;
@property (nonatomic) BOOL isNon2xxResponseCode;
@property (nonatomic) NSMutableData non2xxDataBuffer;
@property (nonatomic) TTRedirectTask redirectTask;
@property (nonatomic) NSURL fileDestinationURL;
@property (nonatomic) BOOL isFileAppend;
@property (nonatomic) Q uploadFileOffset;
@property (nonatomic) Q uploadFileLength;
@property (nonatomic) ^v engine;
@property (nonatomic) TTHttpRequestChromium request;
@property (nonatomic) Q taskId;
@property (nonatomic) @? callbackBlock;
@property (nonatomic) @? uploadProgressBlock;
@property (nonatomic) @? downloadProgressBlock;
@property (nonatomic) float taskPriority;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) q throttleNetBytesPerSecond;
@property (nonatomic) NSInteger taskType;
@property (nonatomic) BOOL forceRun;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSMutableIndexSet acceptableStatusCodes;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatch_queue;
@property (nonatomic) @? streamReadCompleteBlock;
@property (nonatomic) NSProgress uploadProgress;
@property (nonatomic) NSProgress downloadProgress;
@property (nonatomic) @? headerBlock;
@property (nonatomic) @? dataBlock;
@property (nonatomic) @? redirectedBlock;
@property (nonatomic) BOOL isWebviewRequest;
@property (nonatomic) NSInteger delayTimeMills;
@property (nonatomic) NSString compressLog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)getDelayTimeWithUrl:requestTag:;
- (void)onURLFetchDownloadProgress:current:total:current_network_bytes:;
- (id)redirectedBlock;
- (void)setCompressLog:;
- (void)setHeaderBlock:;
- (id)acceptableStatusCodes;
- (id)compressLog;
- (int)delayTimeMills;
- (id)downloadProgressCallbackQueue;
- (id)fileDestinationURL;
- (id)headerBlock;
- (id)initWithRequest:engine:dispatchQueue:taskId:completedCallback:;
- (id)initWithRequest:engine:dispatchQueue:taskId:completedCallback:uploadProgressCallback:downloadProgressCallback:;
- (id)initWithRequest:engine:dispatchQueue:taskId:enableHttpCache:completedCallback:uploadProgressCallback:downloadProgressCallback:;
- (BOOL)isFileAppend;
- (BOOL)isNon2xxResponseCode;
- (BOOL)isWebviewRequest;
- (id)non2xxDataBuffer;
- (void)onCancel:subErrorCode:;
- (void)onReadResponseData:;
- (void)onResponseStarted:;
- (void)onTimeout:error:details:requestLog:;
- (void)onURLFetchComplete:;
- (void)onURLFetchUploadProgress:current:total:;
- (void)onURLRedirectReceived:redirect_info:response_info:;
- (id)redirectTask;
- (void)runRequestFiltersAndStart;
- (void)setAcceptableStatusCodes:;
- (void)setDelayTimeMills:;
- (void)setDispatch_queue:;
- (void)setDownloadProgressCallback:;
- (void)setDownloadProgressCallbackQueue:;
- (void)setFetcherPriority_:;
- (void)setFileDestinationURL:;
- (void)setHeaderCallback:;
- (void)setIsFileAppend:;
- (void)setIsNon2xxResponseCode:;
- (void)setIsWebviewRequest:;
- (void)setNon2xxDataBuffer:;
- (void)setRedirectTask:;
- (void)setRedirectedBlock:;
- (void)setStreamReadCompleteBlock:;
- (void)setThrottleNetBytesPerSecond:;
- (void)setThrottleNetSpeed:;
- (void)setUploadFileLength:;
- (void)setUploadFileOffset:;
- (void)setUploadProgressCallback:;
- (void)startRedirect;
- (id)streamReadCompleteBlock;
- (long long)throttleNetBytesPerSecond;
- (unsigned long long)uploadFileLength;
- (unsigned long long)uploadFileOffset;
- (id)downloadProgress;
- (void)setLevel:;
- (void)setDownloadProgress:;
- (id)engine;
- (void)setEngine:;
- (void)cancel;
- (void)setPriority:;
- (void)dealloc;
- (void)readDataOfMinLength:maxLength:timeout:completionHandler:;
- (BOOL)isCancelled;
- (int)level;
- (int)taskType;
- (void)suspend;
- (id)request;
- (unsigned long long)taskId;
- (void)resume;
- (id)uploadProgressBlock;
- (long long)state;
- (BOOL)isCompleted;
- (void)setIsCancelled:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id).cxx_construct;
- (void)setUploadProgressBlock:;
- (void)setTaskType:;
- (float)taskPriority;
- (void)setTaskPriority:;
- (void)setTaskId:;
- (id)dispatch_queue;
- (id)callbackBlock;
- (id)dataBlock;
- (void)setDataBlock:;
- (void)setIsCompleted:;
- (id)downloadProgressBlock;
- (void)setDownloadProgressBlock:;
- (BOOL)forceRun;
- (void)setForceRun:;
- (void)setCallbackBlock:;
- (id)uploadProgress;
- (void)setUploadProgress:;
@end
