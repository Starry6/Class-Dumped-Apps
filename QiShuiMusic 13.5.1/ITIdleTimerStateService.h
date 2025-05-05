@interface ITIdleTimerStateService : NSObject
@property (nonatomic) <ITIdleTimerStateServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:delegate:;
- (void)clientDidDisconnect:;
- (id)initWithDispatchQueue:;
- (BOOL)isIdleTimerServiceAvailable;
- (BOOL)clientConfiguration:handleIdleEvent:;
- (void)_addStateCaptureHandler;
- (BOOL)addIdleTimerConfiguration:fromProcess:forReason:;
- (void)removeIdleTimerConfigurationFromProcess:forReason:;
- (id)_identifierForClientProcess:;
@end
