@interface ITIdleTimerStateModel : NSObject
@property (nonatomic) BOOL idleTimerServiceAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isIdleTimerServiceAvailable;
- (void)_addStateCaptureHandler;
- (BOOL)handleIdleEvent:usingConfigurationWithIdentifier:;
- (id)newIdleTimerAssertionWithConfiguration:forReason:error:;
- (void)resendIdleTimerAssertions;
- (id)_access_newIdleTimerAssertionWithConfiguration:forReason:error:;
@end
