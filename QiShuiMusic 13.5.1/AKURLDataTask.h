@interface AKURLDataTask : NSObject
@property (nonatomic) NSURLRequest request;
@property (nonatomic) Q retryCount;
@property (nonatomic) NSURLSessionDataTask underlyingTask;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSMutableData receivedData;
@property (nonatomic) NSError lastRetryError;
@property (nonatomic) BOOL canceledOrCompleted;
- (id)lastRetryError;
- (void)setCompletionHandler:;
- (void)setRetryCount:;
- (id)request;
- (void)setLastRetryError:;
- (unsigned long long)retryCount;
- (id)receivedData;
- (BOOL)canceledOrCompleted;
- (void)setUnderlyingTask:;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (id)underlyingTask;
- (id)description;
- (void)setReceivedData:;
- (void)setRequest:;
- (void)setCanceledOrCompleted:;
- (id)completionHandler;
@end
