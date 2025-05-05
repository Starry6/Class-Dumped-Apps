@interface GEOServiceRequesterOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cleanup;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (id)_fullURL;
- (void)_captureNetworkEventForTask;
- (id)protobufSession:validateResponse:;
- (id)initWithRequest:traits:auditToken:config:throttleToken:willSendRequestHandler:validationHandler:completionHandler:;
- (void).cxx_destruct;
- (void)protobufSession:willSendRequest:forTask:completionHandler:;
- (void)protobufSession:didCompleteTask:;
@end
