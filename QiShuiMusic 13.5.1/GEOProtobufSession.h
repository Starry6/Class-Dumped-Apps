@interface GEOProtobufSession : NSObject
@property (nonatomic) <GEODataSession> dataSession;
- (id)init;
- (id)initWithDataSession:;
- (id)dataSession;
- (id)taskWithRequestKind:protobufRequest:URL:additionalHTTPHeaders:needsProxy:auditToken:traits:delegate:delegateQueue:requestCounterTicket:multipathServiceType:multipathAlternatePort:throttleToken:;
- (void).cxx_destruct;
- (id)taskWithRequest:requestTypeCode:responseClass:delegate:delegateQueue:;
+ (id)sharedDelegateQueue;
+ (id)sharedProtobufSession;
@end
