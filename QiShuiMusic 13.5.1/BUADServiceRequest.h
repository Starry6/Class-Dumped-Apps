@interface BUADServiceRequest : NSObject
@property (nonatomic) BU_AFHTTPSessionManager httpManager;
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) <BUADRequestSerializerProtocol> requestSerializer;
@property (nonatomic) <BUADResponseSerializerProtocol> responseSerializer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHttpManager:;
- (id)dataTaskWithRequest:uploadProgress:downloadProgress:completionHandler:;
- (BOOL)evaluateServerTrust:forDomain:;
- (id)httpManager;
- (id)requestSerializer;
- (id)responseSerializer;
- (void)setRequestSerializer:;
- (void)setResponseSerializer:;
- (void)setSessionDidReceiveAuthenticationChallengeBlock:;
- (void)setCompletionQueue:;
- (id)completionQueue;
- (id)init;
- (id)dataTaskWithRequest:completionHandler:;
- (void)setDelegate:;
- (void).cxx_destruct;
- (void)_setupData;
@end
