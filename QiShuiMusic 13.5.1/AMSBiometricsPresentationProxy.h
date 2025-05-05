@interface AMSBiometricsPresentationProxy : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) AMSURLSession session;
@property (nonatomic) NSURLSessionTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)task;
- (id)initWithSession:task:;
- (id)delegateQueue;
- (id)session;
- (void).cxx_destruct;
- (void)setDelegateQueue:;
- (void)handleAuthenticateRequest:completion:;
- (void)handleDialogRequest:completion:;
@end
