@interface GEODirectionsRequester : NSObject
- (void)cancelRequest:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProxy:;
- (void)finalizeRequest:;
- (void)startRequest:finished:networkActivity:error:;
- (void)startRequest:callbackQueue:finished:networkActivity:error:;
- (void)startRequest:auditToken:callbackQueue:finished:networkActivity:error:;
- (void)startRequest:auditToken:useBackgroundURL:callbackQueue:finished:networkActivity:error:;
- (void)startRequest:auditToken:skipFinalize:useBackgroundURL:requestPriority:finished:networkActivity:error:;
- (void)startRequest:auditToken:skipFinalize:useBackgroundURL:requestPriority:callbackQueue:finished:networkActivity:error:;
+ (void)useLocalProxy;
+ (id)sharedRequester;
+ (void)useProxy:;
+ (void)useRemoteProxy;
@end
