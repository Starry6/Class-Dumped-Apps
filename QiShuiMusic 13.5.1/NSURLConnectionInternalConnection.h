@interface NSURLConnectionInternalConnection : NSURLConnectionInternal
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelAuthenticationChallenge:;
- (void)performDefaultHandlingForAuthenticationChallenge:;
- (void)_resumeLoading;
- (void)rejectProtectionSpaceAndContinueWithChallenge:;
- (void)continueWithoutCredentialForAuthenticationChallenge:;
- (void)unscheduleFromRunLoop:forMode:;
- (void)useCredential:forAuthenticationChallenge:;
- (void)cancel;
- (void)dealloc;
- (void)_suspendLoading;
- (id)initWithInfo:;
- (void)start;
- (void)scheduleInRunLoop:forMode:;
- (void)_setDelegateQueue:;
- (void)_setShouldSkipCancelOnRelease:;
- (void)invokeForDelegate:;
- (id)_timingData;
- (void)_invalidate;
@end
