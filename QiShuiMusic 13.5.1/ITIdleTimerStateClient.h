@interface ITIdleTimerStateClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_connectionInterrupted;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)isIdleTimerServiceAvailable;
- (BOOL)handleIdleEvent:usingConfigurationWithIdentifier:;
- (void)addIdleTimerConfiguration:forReason:error:;
- (void)removeIdleTimerConfiguration:forReason:;
- (void)_access_removeIdleTimerConfiguration:forReason:;
- (void)_access_addIdleTimerConfiguration:forReason:error:;
@end
