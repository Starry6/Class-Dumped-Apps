@interface BUURLSessionDelegateObject : NSObject
@property (nonatomic) <BUURLSessionDelegateObjectDelegate> delegate;
@property (nonatomic) NSMutableData bufferData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deliverChunksData:task:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)URLSession:task:didCompleteWithError:;
- (void)setDelegate:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)bufferData;
- (void)setBufferData:;
@end
