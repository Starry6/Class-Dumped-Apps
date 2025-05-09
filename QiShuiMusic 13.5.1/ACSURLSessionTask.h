@interface ACSURLSessionTask : NSObject
@property (nonatomic) @? _nsurlTaskCreator;
@property (nonatomic) NSURLSessionTask _nsurlTaskToOrigin;
@property (nonatomic) NSURLSessionTask _nsurlTaskToCachingServer;
@property (nonatomic) ACSURLSession _weakSession;
@property (nonatomic) BOOL _isUpload;
@property (nonatomic) BOOL _tryCachingServer;
@property (nonatomic) BOOL _failBackToOrigin;
@property (nonatomic) BOOL _suspended;
@property (nonatomic) Q taskIdentifier;
@property (nonatomic) NSURLRequest originalRequest;
@property (nonatomic) NSURLRequest currentRequest;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSProgress progress;
@property (nonatomic) q countOfBytesClientExpectsToSend;
@property (nonatomic) q countOfBytesClientExpectsToReceive;
@property (nonatomic) q countOfBytesReceived;
@property (nonatomic) q countOfBytesSent;
@property (nonatomic) q countOfBytesExpectedToSend;
@property (nonatomic) q countOfBytesExpectedToReceive;
@property (nonatomic) NSString taskDescription;
@property (nonatomic) q state;
@property (nonatomic) NSError error;
@property (nonatomic) float priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)taskIdentifier;
- (void)cancel;
- (void)setPriority:;
- (id)currentRequest;
- (void)setTaskDescription:;
- (void)suspend;
- (id)error;
- (id)taskDescription;
- (long long)countOfBytesExpectedToReceive;
- (id)progress;
- (void)resume;
- (long long)countOfBytesReceived;
- (BOOL)_isUpload;
- (long long)state;
- (id)response;
- (void).cxx_destruct;
- (id)description;
- (id)originalRequest;
- (long long)countOfBytesSent;
- (long long)countOfBytesExpectedToSend;
- (id)copyWithZone:;
- (float)priority;
- (long long)countOfBytesClientExpectsToSend;
- (void)setCountOfBytesClientExpectsToSend:;
- (long long)countOfBytesClientExpectsToReceive;
- (void)setCountOfBytesClientExpectsToReceive:;
- (BOOL)_suspended;
- (id)_weakSession;
- (id)initWithNSURLTaskCreator:initialRequest:forSession:;
- (id)_nsurlTaskForRequest:;
- (id)_nsurlTaskCreator;
- (void)set_nsurlTaskCreator:;
- (id)_nsurlTaskToOrigin;
- (void)set_nsurlTaskToOrigin:;
- (id)_nsurlTaskToCachingServer;
- (void)set_nsurlTaskToCachingServer:;
- (void)set_weakSession:;
- (BOOL)_tryCachingServer;
- (void)set_tryCachingServer:;
- (BOOL)_failBackToOrigin;
- (void)set_failBackToOrigin:;
- (void)set_suspended:;
@end
