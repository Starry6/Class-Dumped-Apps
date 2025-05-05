@interface AIASSession : NSObject
@property (nonatomic) NSMutableDictionary taskMap;
@property (nonatomic) NSURLSession URLSession;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (id)URLSession;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)init;
- (void)invalidateAndCancel;
- (void)URLSession:task:didCompleteWithError:;
- (BOOL)invalidated;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)setInvalidated:;
- (id)getRequest:;
- (id)requestWithURL:data:clientInfo:proxiedClientInfo:companionClientInfo:appleITeamId:appleIClientId:additionalHeaders:;
- (id)taskMap;
- (void).cxx_destruct;
- (void)setTaskMap:;
- (void)setURLSession:;
@end
