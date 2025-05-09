@interface BDiOSUploadTask : NSObject
@property (nonatomic) NSURLSessionUploadTask uploadTask;
@property (nonatomic) NSURLSessionTask dataTask;
@property (nonatomic) @? taskCompletion;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSError error;
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableData mutableData;
@property (nonatomic) BOOL cancel;
@property (nonatomic) NSURLSession backgroundSession;
@property (nonatomic) @? asynTaskCompletion;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asynSendRequest:readTimeout:writeTimeout:completion:;
- (void)asynSendRequest:readTimeout:writeTimeout:data:completion:;
- (id)asynTaskCompletion;
- (void)initSessionMd5:readTimeout:writeTimeout:;
- (void)setAsynTaskCompletion:;
- (void)setTaskCompletion:;
- (void)synSendRequest:readTimeout:writeTimeout:completion:;
- (void)synSendRequest:readTimeout:writeTimeout:data:completion:;
- (void)synSendRequest:readTimeout:writeTimeout:filePath:completion:;
- (id)taskCompletion;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setDataTask:;
- (id)init;
- (BOOL)cancel;
- (void)setMutableData:;
- (void)dealloc;
- (id)mutableData;
- (id)dataTask;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:taskIsWaitingForConnectivity:;
- (void)URLSession:didBecomeInvalidWithError:;
- (void)setError:;
- (id)identifier;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (id)error;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (void)URLSession:dataTask:didBecomeDownloadTask:;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (id)lock;
- (void)setCancel:;
- (id)response;
- (void)setBackgroundSession:;
- (void).cxx_destruct;
- (id)backgroundSession;
- (void)URLSession:dataTask:didBecomeStreamTask:;
- (void)setResponse:;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:;
- (void)setIdentifier:;
- (void)setLock:;
- (void)cancelTask;
- (id)uploadTask;
- (void)setUploadTask:;
+ (id)MD5WithData:;
+ (void)removeFilePath:;
+ (BOOL)createFile:data:;
+ (long long)fileSizeByfilePath:;
+ (id)getFilePathDir;
+ (long long)getFileSize:;
@end
