@interface GEOServiceRequester : NSObject
@property (nonatomic) # operationClass;
- (id)init;
- (void).cxx_destruct;
- (id)_validateResponse:;
- (void)_startWithRequest:traits:auditToken:config:throttleToken:completionHandler:;
- (void)_startWithRequest:traits:auditToken:config:throttleToken:willSendRequestHandler:completionHandler:;
- (void)_cancelRequest:;
- (id)_keyForRequest:;
- (void)_addOperation:forRequest:;
- (id)_removeOperationForRequest:;
- (Class)operationClass;
- (void)setOperationClass:;
@end
