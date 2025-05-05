@interface GEOETARequester : NSObject
- (void)cancelRequest:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_finishRequest:;
- (void)startRequest:connectionProperties:auditToken:throttleToken:callbackQueue:willSendRequest:finished:networkActivity:error:;
- (void)startSimpleETARequest:auditToken:throttleToken:callbackQueue:finished:networkActivity:error:;
- (void)cancelSimpleETARequest:;
- (BOOL)_finishSimpleRequest:;
+ (id)sharedRequester;
@end
