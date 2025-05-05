@interface NSURLConnectionInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelAuthenticationChallenge:;
- (void)performDefaultHandlingForAuthenticationChallenge:;
- (void)rejectProtectionSpaceAndContinueWithChallenge:;
- (void)continueWithoutCredentialForAuthenticationChallenge:;
- (void)useCredential:forAuthenticationChallenge:;
- (void)dealloc;
- (id)initWithInfo:;
- (void)_setDelegateQueue:;
- (void)invokeForDelegate:;
- (id)_timingData;
- (void)_invalidate;
@end
