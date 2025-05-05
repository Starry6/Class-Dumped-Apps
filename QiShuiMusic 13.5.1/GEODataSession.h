@interface GEODataSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> sessionIsolation;
@property (nonatomic) GEODataURLSession urlSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urlSession;
- (id)init;
- (id)taskWithRequest:priority:delegate:delegateQueue:;
- (id)sessionIsolation;
- (id)downloadTaskWithRequest:priority:delegate:delegateQueue:;
- (id)taskWithRequest:delegate:delegateQueue:;
- (id)initWithUrlSession:;
- (id)manifestManager;
- (void).cxx_destruct;
- (id)asynchronousGetURL:kind:auditToken:requestCounterTicket:queue:completionHandler:;
+ (id)sharedDataSession;
+ (id)asynchronousGetURL:kind:auditToken:requestCounterTicket:queue:completionHandler:;
@end
