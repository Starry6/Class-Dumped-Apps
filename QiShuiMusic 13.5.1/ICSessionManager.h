@interface ICSessionManager : NSObject
@property (nonatomic) NSArray sessions;
@property (nonatomic) NSArray connections;
@property (nonatomic) Q sessionCount;
@property (nonatomic) <ICSessionManagerProtocol> delegate;
- (id)connections;
- (void)dealloc;
- (id)sessions;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithDelegate:;
- (id)sessionWithConnection:;
- (BOOL)createSessionWithConnection:;
- (unsigned long long)currentSessionCount;
- (void)addNotifications:toSessionWithConnection:;
- (void)remNotifications:fromSessionWithConnection:;
- (unsigned long long)removeSessionWithConnection:;
- (unsigned long long)removeSessionsWithProcessIdentifier:;
- (void)removeAllSessions;
- (id)connectionsMonitoringNotification:;
- (id)connectionsMonitoringObjectID:;
- (unsigned long long)sessionCount;
@end
