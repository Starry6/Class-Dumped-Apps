@interface AVContentKeyPSSHRequestTracker : NSObject
- (void)dealloc;
- (id)requests;
- (void)addRequest:;
- (id)initWithRequestCount:;
- (BOOL)haveAllRequestsBeenReceived;
@end
