@interface ICSuzeLeaseSession : NSObject
@property (nonatomic) ICSuzeLeaseSessionConfiguration configuration;
@property (nonatomic) <ICSuzeLeaseSessionDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (void)startLeaseSessionWithCompletionHandler:;
- (void)stopLeaseSessionWithCompletionHandler:;
- (id)_newSuzeLeaseRequestWithType:clientData:;
- (void)_renewLeaseTimerAction;
- (void)_updateRenewalTimer;
- (void)_updateRenewalTimerWithResponse:;
@end
