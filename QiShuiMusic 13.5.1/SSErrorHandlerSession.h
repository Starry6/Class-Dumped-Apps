@interface SSErrorHandlerSession : NSObject
- (id)init;
- (void)dealloc;
- (id)valueForProperty:;
- (void)retry;
- (void)performDefaultHandling;
- (void)redirectToURL:;
- (void)_setControlConnection:;
- (void)_setErrorProperties:;
- (void)_setSessionID:;
@end
