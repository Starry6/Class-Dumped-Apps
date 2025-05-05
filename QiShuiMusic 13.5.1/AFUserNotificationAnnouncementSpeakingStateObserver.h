@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (void)dealloc;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)_currentConnection;
- (void)_tearDown;
- (void).cxx_destruct;
- (id)initWithQueue:delegate:;
- (void)invalidate;
- (void)_cleanUpConnection;
- (void)speakingStateDidChange:forIdentifiers:;
- (void)startObservingNotificationWithRequestIdentifier:;
- (void)stopObservingNotificationWithRequestIdentifier:;
- (void)_startObservingNotificationWithRequestIdentifier:;
- (void)_removeObserverForNotificationRequestIdentifier:;
- (void)_speakingStateDidChange:forIdentifiers:;
- (void)_notifyObserverOfFailureForAllObservingNotifications;
- (void)cleanUpConnection;
@end
