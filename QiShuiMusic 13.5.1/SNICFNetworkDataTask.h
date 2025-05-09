@interface SNICFNetworkDataTask : NSObject
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSMutableData resultData;
@property (nonatomic) NSHTTPURLResponse response;
@property (nonatomic) NSTimer timeoutTimer;
@property (nonatomic) @? completion;
@property (nonatomic) SNICFNetworkManager manager;
@property (nonatomic) NSString uuid;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)analyseResponse;
- (void)startTask;
- (void)timeoutAction;
- (id)completion;
- (id)inputStream;
- (void)setCompletion:;
- (void)stopTimer;
- (id)uuid;
- (void)setTimeout:;
- (void)setUuid:;
- (void)startTimer;
- (id)resultData;
- (id)request;
- (void)setInputStream:;
- (id)manager;
- (void)setManager:;
- (id)response;
- (void).cxx_destruct;
- (void)stream:handleEvent:;
- (double)timeout;
- (void)setRequest:;
- (void)setResponse:;
- (id)initWithRequest:completionHandler:;
- (id)timeoutTimer;
- (void)setTimeoutTimer:;
- (void)completeWithError:;
- (void)setResultData:;
@end
