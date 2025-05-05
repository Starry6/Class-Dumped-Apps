@interface FPXPCAutomaticErrorProxy : NSObject
@property (nonatomic) NSInteger requestEffectivePid;
@property (nonatomic) Q timeoutState;
- (id)initWithConnection:protocol:orError:name:requestPid:;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (id)synchronousRemoteObjectProxy;
- (id)initWithRemoteObjectProxy:protocol:orError:name:requestPid:requestWillBegin:requestDidBegin:;
- (void)setRequestEffectivePid:;
- (id)initWithConnection:protocol:orError:name:requestPid:requestWillBegin:requestDidBegin:;
- (id)methodSignatureForSelector:;
- (id)remoteObjectProxy;
- (void)_requestDidFinish:requestDidFinishBlock:;
- (id)remoteObjectProxyWithErrorHandler:;
- (BOOL)conformsToProtocol:;
- (void)_requestDidBegin:progress:requestID:;
- (void).cxx_destruct;
- (id)initWithConnection:protocol:orError:name:requestPid:requestWillBegin:;
- (id)description;
- (void)forwardInvocation:;
- (int)requestEffectivePid;
- (id)_requestWillBegin:requestID:;
- (unsigned long long)timeoutState;
- (id)copyWithZone:;
- (void)setTimeoutState:;
+ (BOOL)sanitizeErrors;
@end
