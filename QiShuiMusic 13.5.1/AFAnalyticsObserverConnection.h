@interface AFAnalyticsObserverConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (void)dealloc;
- (void)_connectionInterrupted;
- (void).cxx_destruct;
- (void)flushWithCompletion:;
- (void)invalidate;
- (void)_connectionInvalidated;
- (id)didObserveEvents:completion:;
- (void)_cleanUpConnection;
- (id)initWithObservation:;
- (void)waitUntilInvalidated;
@end
