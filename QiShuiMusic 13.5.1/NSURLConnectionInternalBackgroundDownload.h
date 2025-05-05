@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelAuthenticationChallenge:;
- (void)performDefaultHandlingForAuthenticationChallenge:;
- (void)rejectProtectionSpaceAndContinueWithChallenge:;
- (void)continueWithoutCredentialForAuthenticationChallenge:;
- (void)unscheduleFromRunLoop:forMode:;
- (void)useCredential:forAuthenticationChallenge:;
- (void)cancel;
- (void)dealloc;
- (long long)_getDownloadIdent;
- (id)initWithInfo:;
- (void)start;
- (BOOL)downloadHandler:pauseSession:;
- (void)downloadHandler:handleAuthenticationSession:;
- (void)scheduleInRunLoop:forMode:;
- (void)_managerFailedToStartInTime;
- (void)invokeForDelegate:;
- (void)downloadHandler:cancelSession:;
- (void)_updateDownloadState:;
- (void)_invalidate;
- (id)description;
- (void)downloadHandlerDidDisconnect:;
+ (void)_enableLogging;
@end
