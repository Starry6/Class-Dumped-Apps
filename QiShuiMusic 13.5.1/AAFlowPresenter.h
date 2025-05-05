@interface AAFlowPresenter : NSObject
@property (nonatomic) NSXPCListener remoteListener;
@property (nonatomic) SBSRemoteAlertHandle remoteAlertHandle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? presentationCompletion;
- (void)remoteAlertHandle:didInvalidateWithError:;
- (void)remoteAlertHandleDidDeactivate:;
- (void)remoteAlertHandleDidActivate:;
- (void)dealloc;
- (id)remoteAlertHandle;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setRemoteAlertHandle:;
- (id)remoteListener;
- (void)setRemoteListener:;
- (id)presentationCompletion;
- (void)setPresentationCompletion:;
- (void)flowFinishedWithError:completion:;
- (void)launchProcessWithUserInfo:;
- (void)_callCompletionBlockWithError:;
@end
